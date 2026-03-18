/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0066380
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0037030 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 * Callees:
 *     Template_qpxp @ 0x1C0010BAC (Template_qpxp.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069CA0 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069EA0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006A5A4 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  PVOID *v7; // rdi
  _DWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((int *)this + 16);
  if ( (_DWORD)v2 == 5 )
  {
    v6 = *((_QWORD *)this + 9);
    v7 = (PVOID *)((char *)this + 32);
    RegionSize = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v8 = *(_DWORD **)(v6 + 32);
    if ( (unsigned int)(*v8 - 3) <= 3 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2);
      v9[7] = 0LL;
      v9[3] = 270LL;
      v9[4] = 52LL;
      v9[5] = 4LL;
      v9[6] = 5LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, &RegionSize, 0x4000u);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v11 = *((_QWORD *)this + 9);
      v12 = *(_QWORD *)(v11 + 32);
      if ( (unsigned int)(*(_DWORD *)v12 - 3) > 3 )
        v13 = *v7;
      else
        v13 = *(PVOID *)(v11 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v10,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 8LL),
          (char)this,
          RegionSize,
          (char)v13);
    }
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)this + 9), this);
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 52LL;
    v5[5] = 5LL;
    v5[6] = v2;
    WdLogEvent5_WdCriticalError(v5);
  }
}
