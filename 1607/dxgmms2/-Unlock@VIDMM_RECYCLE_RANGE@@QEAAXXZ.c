/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061E64
 * Callers:
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C005EE54 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005EF4C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Unlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax

  v4 = *((int *)this + 16);
  if ( (_DWORD)v4 == 2 )
  {
    if ( (*((_DWORD *)this + 23))-- == 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        this,
        a3,
        a4);
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 3LL, v7, v8);
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 52LL;
    v9[5] = 3LL;
    v9[6] = v4;
    WdLogEvent5_WdCriticalError(v9);
  }
}
