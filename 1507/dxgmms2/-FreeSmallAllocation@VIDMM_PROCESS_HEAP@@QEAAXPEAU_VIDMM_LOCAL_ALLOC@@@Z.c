/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0074C78
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0074900 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     Template_qpxp @ 0x1C0010BAC (Template_qpxp.c)
 *     ExFreeToPagedLookasideList @ 0x1C0011F44 (ExFreeToPagedLookasideList.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C0074B24 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0075C98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r9
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a2 + 3);
  if ( *(_BYTE *)(v2 + 72) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 21LL;
    v5[5] = this;
    v5[6] = v2;
    WdLogEvent5_WdCriticalError(v5);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 2));
  v7 = *(void **)(v2 + 32);
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *(_QWORD *)(v2 + 32) = 0LL;
  }
  v8 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)(v8 + 24) != 1 )
  {
    if ( *(_QWORD *)(v8 + 56) || *(_QWORD *)(v8 + 88) )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)this + 104LL))(
        this,
        *(_QWORD *)a2,
        v2,
        v6);
    }
    else
    {
      BaseAddress = (PVOID)(*(_QWORD *)(v2 + 16) + *(_QWORD *)(v8 + 32));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)(v2 + 56), 0x4000u);
    }
  }
  VIDMM_LINEAR_POOL::Free(*(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v2 + 8) + 72LL), *(struct _VIDMM_POOL_BLOCK **)(v2 + 24));
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) -= *(_QWORD *)(v2 + 56);
  v10 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 80LL);
  v11 = *(_QWORD *)(v2 + 56);
  if ( v10 == 1 )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) -= v11;
  }
  else
  {
    v12 = v10 == 2;
    v13 = *((_QWORD *)this + 1);
    if ( v12 )
      *(_QWORD *)(v13 + 104) -= v11;
    else
      *(_QWORD *)(v13 + 120) -= v11;
  }
  --*(_DWORD *)(*(_QWORD *)(v2 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v14 = *(_QWORD *)(v2 + 8);
    v15 = (unsigned int)(*(_DWORD *)(v14 + 80) - 3) > 3 ? *(_QWORD *)(v14 + 32) : *(_QWORD *)(v14 + 88);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_qpxp(
        *((_QWORD *)this + 1),
        &EventDestroyProcessAllocationDetails,
        v9,
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
        v2,
        *(_QWORD *)(v2 + 56),
        v15);
  }
  v16 = *(_QWORD *)(v2 + 8);
  if ( !*(_DWORD *)(v16 + 24) )
    VIDMM_PROCESS_HEAP::FreeBlock(this, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v16);
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), (PVOID)v2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 2), v17, v18, v19);
}
