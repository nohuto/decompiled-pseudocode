/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005D8C4
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0059D70 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005A9B0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     Template_qpxp @ 0x1C001E2B8 (Template_qpxp.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00599B4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005C7B0 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005D408 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
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
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rdx
  ULONG_PTR v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((int *)this + 16);
  if ( (_DWORD)v4 == 5 )
  {
    v7 = *((_QWORD *)this + 9);
    v8 = (PVOID *)((char *)this + 32);
    v16 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v9 = *(_DWORD **)(v7 + 32);
    if ( (unsigned int)(*v9 - 3) <= 3 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, a2, a3, a4);
      v12[7] = 0LL;
      v12[3] = 270LL;
      v12[4] = 52LL;
      v12[5] = 4LL;
      v12[6] = 5LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8, &v16, 0x4000u);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v13 = *((_QWORD *)this + 9);
      v14 = *(_QWORD *)(v13 + 32);
      if ( (unsigned int)(*(_DWORD *)v14 - 3) > 3 )
        v15 = *v8;
      else
        v15 = *(PVOID *)(v13 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v10,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 8LL),
          (char)this,
          v16,
          (char)v15);
    }
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0LL);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)this + 9), (__int64)this);
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 52LL;
    v11[5] = 5LL;
    v11[6] = v4;
    WdLogEvent5_WdCriticalError(v11);
  }
}
