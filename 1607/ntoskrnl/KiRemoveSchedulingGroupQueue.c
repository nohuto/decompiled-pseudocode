/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x140099478
 * Callers:
 *     KiSwapThread @ 0x14005B200 (KiSwapThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400993E4 (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x1400996DC (KiResortScbQueue.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A6B30 (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D0304 (KiComputeGroupSchedulingRank.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D20C0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 */

void __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 *v7; // rcx

  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = (unsigned __int64 *)(v6 + 392);
    if ( !v6 )
      v7 = (unsigned __int64 *)(a1 + 22768);
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    RtlRbRemoveNode(v7, (unsigned __int64 *)(a2 + 88));
    a2 = *v5;
  }
  while ( *v5 && (*(_BYTE *)(a2 + 112) & 1) != 0 && !*(_QWORD *)(a2 + 392) && !*(_WORD *)(a2 + 114) );
}
