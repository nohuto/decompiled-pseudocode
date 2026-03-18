/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061F78
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005F10C (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005F310 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FB08 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v4 = *((int *)this + 16);
  v6 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( !(_DWORD)v6 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v12 - 3) <= 3 )
    {
      v11 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v12 + 8), this, a3, a4);
      v11 = 5LL;
    }
    goto LABEL_4;
  }
  if ( (_DWORD)v6 == 2 )
  {
    v7 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v7 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v7, this, a3, a4);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v8, this, v9, v10);
    v11 = 4LL;
LABEL_4:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v11, a3, a4);
    return;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3, a4);
  v13[7] = 0LL;
  v13[3] = 270LL;
  v13[4] = 52LL;
  v13[5] = 1LL;
  v13[6] = v4;
  WdLogEvent5_WdCriticalError(v13);
}
