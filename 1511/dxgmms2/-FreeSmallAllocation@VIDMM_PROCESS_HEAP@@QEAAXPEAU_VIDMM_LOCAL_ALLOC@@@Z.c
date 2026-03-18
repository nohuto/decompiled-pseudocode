/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0088DE8
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0088A70 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_qpxp @ 0x1C001E2B8 (Template_qpxp.c)
 *     ExFreeToPagedLookasideList @ 0x1C001EB64 (ExFreeToPagedLookasideList.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C0088C94 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 3);
  if ( *(_BYTE *)(v4 + 72) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 21LL;
    v7[5] = this;
    v7[6] = v4;
    WdLogEvent5_WdCriticalError(v7);
  }
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)this + 2));
  v10 = *(void **)(v4 + 32);
  if ( v10 )
  {
    MmUnsecureVirtualMemory(v10);
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  v11 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v11 + 24) != 1 )
  {
    if ( *(_QWORD *)(v11 + 56) || *(_QWORD *)(v11 + 88) )
    {
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)this + 120LL))(
        this,
        *(_QWORD *)a2,
        v4,
        v9);
    }
    else
    {
      BaseAddress = (PVOID)(*(_QWORD *)(v4 + 16) + *(_QWORD *)(v11 + 32));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)(v4 + 56), 0x4000u);
    }
  }
  VIDMM_LINEAR_POOL::Free(
    *(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v4 + 8) + 72LL),
    *(struct _VIDMM_POOL_BLOCK **)(v4 + 24),
    v8,
    v9);
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) -= *(_QWORD *)(v4 + 56);
  v13 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 80LL);
  v14 = *(_QWORD *)(v4 + 56);
  if ( v13 == 1 )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) -= v14;
  }
  else
  {
    v15 = v13 == 2;
    v16 = *((_QWORD *)this + 1);
    if ( v15 )
      *(_QWORD *)(v16 + 104) -= v14;
    else
      *(_QWORD *)(v16 + 120) -= v14;
  }
  --*(_DWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v17 = *(_QWORD *)(v4 + 8);
    v18 = (unsigned int)(*(_DWORD *)(v17 + 80) - 3) > 3 ? *(_QWORD *)(v17 + 32) : *(_QWORD *)(v17 + 88);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_qpxp(
        *((_QWORD *)this + 1),
        &EventDestroyProcessAllocationDetails,
        v12,
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
        v4,
        *(_QWORD *)(v4 + 56),
        v18);
  }
  v19 = *(_QWORD *)(v4 + 8);
  if ( !*(_DWORD *)(v19 + 24) )
    VIDMM_PROCESS_HEAP::FreeBlock(this, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v19);
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), (PVOID)v4);
  DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)this + 2), v20, v21, v22);
}
