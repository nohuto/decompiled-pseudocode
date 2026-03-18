/*
 * XREFs of ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061C04
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C00601E0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0010524 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FB08 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060B38 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C00667F4 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::FinalizedUnlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx

  v5 = (_QWORD **)(*((_QWORD *)this + 9) + 96LL);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v7 = v6 - 3;
    VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)(v6 - 3));
    v6 = (_QWORD *)*v6;
    v8 = v7 + 3;
    v9 = v7[3];
    v10 = (_QWORD *)v7[4];
    if ( *(_QWORD **)(v9 + 8) != v7 + 3 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    v7[4] = 0LL;
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v7);
  }
  v11 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
  if ( (unsigned int)(*(_DWORD *)v11 - 3) <= 3 )
  {
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v11, this);
    v14 = 0LL;
  }
  else
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v11[1], this, a3, a4);
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    v14 = 5LL;
  }
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, v14, v12, v13);
}
