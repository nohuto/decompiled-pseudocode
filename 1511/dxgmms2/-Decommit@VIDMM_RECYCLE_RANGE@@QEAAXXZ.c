/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005DA7C
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005C204 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005C2AC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A144 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A1AC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A23C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005D408 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  struct VIDMM_RECYCLE_RANGE *v7; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v4 = *((int *)this + 16);
  v6 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( !(_DWORD)v6 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v10 - 3) <= 3 )
    {
      v9 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v10 + 8), this);
      v9 = 5LL;
    }
    goto LABEL_4;
  }
  if ( (_DWORD)v6 == 2 )
  {
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL), this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v8, v7);
    v9 = 4LL;
LABEL_4:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v9);
    return;
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3, a4);
  v11[7] = 0LL;
  v11[3] = 270LL;
  v11[4] = 52LL;
  v11[5] = 1LL;
  v11[6] = v4;
  WdLogEvent5_WdCriticalError(v11);
}
