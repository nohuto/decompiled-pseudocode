/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006A5A4
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0065BE4 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0066380 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006666C (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066818 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00677A0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006A744 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     Template_pqq @ 0x1C0010A8C (Template_pqq.c)
 */

NTSTATUS __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v2 = (int)a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = *(int *)(a1 + 64);
  v4[5] = v2;
  result = WdLogEvent5_WdEvent(v4);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v9 = v2;
    v8 = *(_DWORD *)(a1 + 64);
    result = Template_pqq(v6, &EventRecycleRangeTransition, v7, a1, v8, v9);
  }
  *(_DWORD *)(a1 + 64) = v2;
  return result;
}
