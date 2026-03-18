/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061C04 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0061CCC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0061DC0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061E64 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0061EB0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061F78 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0061FFC (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 * Callees:
 *     Template_pqq @ 0x1C001FCE8 (Template_pqq.c)
 */

NTSTATUS __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v6; // rax
  NTSTATUS result; // eax
  __int64 v8; // rcx
  __int64 v9; // r8

  v4 = (int)a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  v6[3] = a1;
  v6[4] = *(int *)(a1 + 64);
  v6[5] = v4;
  result = WdLogEvent5_WdEvent(v6);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    result = Template_pqq(v8, &EventRecycleRangeTransition, v9, a1, *(_DWORD *)(a1 + 64), v4);
  *(_DWORD *)(a1 + 64) = v4;
  return result;
}
