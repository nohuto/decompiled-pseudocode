/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0061CCC
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005EC14 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006805C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FB08 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060B38 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0066098 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // r9
  VIDMM_RECYCLE_HEAP_MGR **v16; // rcx
  _QWORD *v17; // rax

  v4 = *((int *)this + 16);
  v6 = (unsigned int)(*((_DWORD *)this + 16) - 3);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3, a4);
      v17[7] = 0LL;
      v17[3] = 270LL;
      v17[4] = 52LL;
      v17[5] = 6LL;
      v17[6] = v4;
      WdLogEvent5_WdCriticalError(v17);
      return 0LL;
    }
    if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v6, &EventProfilerEnter, a3, 8001);
    v10 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
            (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5));
    if ( v10 >= 0 )
    {
      v16 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v16 - 3) <= 3 )
      {
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v16, this);
        v11 = 0LL;
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v16[1], this, v8, v15);
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
          *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
          this);
        v11 = 5LL;
      }
LABEL_5:
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, v11, v8, v9);
      if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v12, &EventProfilerExit, v13, 8001);
      return 0LL;
    }
  }
  else
  {
    if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v6, &EventProfilerEnter, a3, 8001);
    v10 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
            (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5));
    if ( v10 >= 0 )
    {
      v11 = 1LL;
      goto LABEL_5;
    }
  }
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 8001);
  return (unsigned int)v10;
}
