/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069710 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064F14 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069CA0 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006A5A4 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C006A838 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r14d
  VIDMM_RECYCLE_HEAP_MGR **v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v3 = *((int *)this + 16);
  v5 = (unsigned int)(*((_DWORD *)this + 16) - 3);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
      v6[7] = 0LL;
      v6[3] = 270LL;
      v6[4] = 52LL;
      v6[5] = 6LL;
      v6[6] = v3;
      WdLogEvent5_WdCriticalError(v6);
      return 0LL;
    }
    if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v5, &EventProfilerEnter, a3, 8001);
    v9 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v9 >= 0 )
    {
      v10 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v10 - 3) <= 3 )
      {
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v10, this);
        v11 = 0LL;
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v10[1], this);
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
          *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
          this);
        v11 = 5LL;
      }
LABEL_20:
      VIDMM_RECYCLE_RANGE::Transition(this, v11);
      if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v13, &EventProfilerExit, v14, 8001);
      return 0LL;
    }
  }
  else
  {
    if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v5, &EventProfilerEnter, a3, 8001);
    v9 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v9 >= 0 )
    {
      v11 = 1LL;
      goto LABEL_20;
    }
  }
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 8001);
  return (unsigned int)v9;
}
