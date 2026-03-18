/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006666C
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0065B00 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00668E0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064F14 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006A5A4 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006AF54 (-UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *((int *)this + 16);
  v4 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 2 )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2);
      v5[7] = 0LL;
      v5[3] = 270LL;
      v5[4] = 52LL;
      v5[5] = 1LL;
      v5[6] = v2;
      WdLogEvent5_WdCriticalError(v5);
      return;
    }
    VIDMM_RECYCLE_HEAP_MGR::UpdateUnlockAgingOnTransition(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
      this);
    v6 = 4LL;
  }
  else
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v7 - 3) <= 3 )
    {
      v6 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v7 + 8), this);
      v6 = 5LL;
    }
  }
  VIDMM_RECYCLE_RANGE::Transition(this, v6);
}
