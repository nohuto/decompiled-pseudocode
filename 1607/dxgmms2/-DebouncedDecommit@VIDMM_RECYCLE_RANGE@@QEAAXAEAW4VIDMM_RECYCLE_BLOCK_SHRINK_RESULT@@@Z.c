/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0061DC0
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C00601E0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     Template_qpxp @ 0x1C001FE08 (Template_qpxp.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DAD0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060B38 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax
  PVOID *v8; // rdi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rdx
  ULONG_PTR v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((int *)this + 16);
  if ( (_DWORD)v4 == 5 )
  {
    v7 = *((_QWORD *)this + 9);
    v8 = (PVOID *)((char *)this + 32);
    v17 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v9 = *(_DWORD **)(v7 + 32);
    if ( (unsigned int)(*v9 - 3) <= 3 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, a2, a3, a4);
      v13[7] = 0LL;
      v13[3] = 270LL;
      v13[4] = 52LL;
      v13[5] = 4LL;
      v13[6] = 5LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8, &v17, 0x4000u);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v14 = *((_QWORD *)this + 9);
      v15 = *(_QWORD *)(v14 + 32);
      if ( (unsigned int)(*(_DWORD *)v15 - 3) > 3 )
        v16 = *v8;
      else
        v16 = *(PVOID *)(v14 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v10,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 8LL),
          (char)this,
          v17,
          (char)v16);
    }
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0LL, v10, v11);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)this + 9), (__int64)this);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v12[7] = 0LL;
    v12[3] = 270LL;
    v12[4] = 52LL;
    v12[5] = 5LL;
    v12[6] = v4;
    WdLogEvent5_WdCriticalError(v12);
  }
}
