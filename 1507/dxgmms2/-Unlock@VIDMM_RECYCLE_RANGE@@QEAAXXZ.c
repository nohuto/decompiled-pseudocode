/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006A744
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0067484 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C006A630 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 * Callees:
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064FA4 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006A5A4 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Unlock(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax

  v2 = *((int *)this + 16);
  if ( (_DWORD)v2 == 2 )
  {
    if ( (*((_DWORD *)this + 23))-- == 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        this);
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 3LL);
    }
  }
  else
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[7] = 0LL;
    v4[3] = 270LL;
    v4[4] = 52LL;
    v4[5] = 3LL;
    v4[6] = v2;
    WdLogEvent5_WdCriticalError(v4);
  }
}
