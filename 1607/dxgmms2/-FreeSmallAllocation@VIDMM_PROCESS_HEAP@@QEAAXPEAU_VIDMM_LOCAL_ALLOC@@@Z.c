/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009DBF8
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009D870 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     Template_qpxp @ 0x1C001FE08 (Template_qpxp.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C009DAA0 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  VIDMM_PROCESS_HEAP *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_QWORD *)a2 + 3);
  v6 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = *(_QWORD *)(v5 + 56);
    a3 = *(_QWORD *)(v5 + 16);
    v7[4] = a3;
    this = *(VIDMM_PROCESS_HEAP **)(v5 + 8);
    v7[5] = this;
  }
  if ( *(_BYTE *)(v5 + 72) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 21LL;
    v8[5] = v6;
    v8[6] = v5;
    WdLogEvent5_WdCriticalError(v8);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v6 + 2));
  v11 = *(void **)(v5 + 32);
  if ( v11 )
  {
    MmUnsecureVirtualMemory(v11);
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  v12 = *(_QWORD *)(v5 + 8);
  if ( *(_DWORD *)(v12 + 24) != 1 )
  {
    if ( *(_QWORD *)(v12 + 56) || *(_QWORD *)(v12 + 88) )
    {
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)v6 + 120LL))(
        v6,
        *(_QWORD *)a2,
        v5,
        v10);
    }
    else
    {
      BaseAddress = (PVOID)(*(_QWORD *)(v5 + 16) + *(_QWORD *)(v12 + 32));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)(v5 + 56), 0x4000u);
    }
  }
  VIDMM_LINEAR_POOL::Free(
    *(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v5 + 8) + 72LL),
    *(struct _VIDMM_POOL_BLOCK **)(v5 + 24),
    v9,
    v10);
  *(_QWORD *)(*((_QWORD *)v6 + 1) + 88LL) -= *(_QWORD *)(v5 + 56);
  v16 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 80LL);
  v17 = *(_QWORD *)(v5 + 56);
  if ( v16 == 1 )
  {
    v18 = *((_QWORD *)v6 + 1);
    *(_QWORD *)(v18 + 112) -= v17;
  }
  else
  {
    v19 = v16 == 2;
    v18 = *((_QWORD *)v6 + 1);
    if ( v19 )
      *(_QWORD *)(v18 + 128) -= v17;
    else
      *(_QWORD *)(v18 + 144) -= v17;
  }
  --*(_DWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v18 = *(_QWORD *)(v5 + 8);
    v13 = (unsigned int)(*(_DWORD *)(v18 + 80) - 3) > 3 ? *(_QWORD *)(v18 + 32) : *(_QWORD *)(v18 + 88);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_qpxp(
        *((_QWORD *)v6 + 1),
        &EventDestroyProcessAllocationDetails,
        v14,
        *(_DWORD *)(*((_QWORD *)v6 + 1) + 8LL),
        v5,
        *(_QWORD *)(v5 + 56),
        v13);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v5 + 8) + 24LL) )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v13, v14, v15) + 24) = *(_QWORD *)(v5 + 8);
    VIDMM_PROCESS_HEAP::FreeBlock(v6, *(struct _VIDMM_PROCESS_HEAP_BLOCK **)(v5 + 8));
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v6 + 64), (PVOID)v5);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v6 + 2), v20, v21, v22);
}
