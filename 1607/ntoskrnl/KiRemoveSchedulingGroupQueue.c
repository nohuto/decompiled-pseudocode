/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x140098C78
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140098BE4 (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x140098EDC (KiResortScbQueue.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A50A8 (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x1400CE1A4 (KiComputeGroupSchedulingRank.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 */

BOOLEAN __fastcall KiRemoveSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  _RTL_RB_TREE *v7; // rcx
  BOOLEAN result; // al

  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = (_RTL_RB_TREE *)(v6 + 392);
    if ( !v6 )
      v7 = a1 + 1423;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    result = RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)(a2 + 88));
    a2 = *v5;
  }
  while ( *v5 && (*(_BYTE *)(a2 + 112) & 1) != 0 && !*(_QWORD *)(a2 + 392) && !*(_WORD *)(a2 + 114) );
  return result;
}
