/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x14002A710
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x140029684 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400840E0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiChooseLowestRankedThread @ 0x1400C34F4 (KiChooseLowestRankedThread.c)
 *     KiAddThreadToReadyQueue @ 0x1401C95D8 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(char *)(a1 + 195) >= 16
    || (*(_DWORD *)(a1 + 120) & 0x100) != 0
    || a3 && (*(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1) )
  {
    return 0LL;
  }
  v3 = a2;
  do
  {
    if ( (*(_BYTE *)(v3 + 112) & 2) != 0 )
      return 0xFFFFFFFFLL;
    v3 = *(_QWORD *)(v3 + 392);
  }
  while ( v3 );
  do
  {
    result = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)result )
      break;
    a2 = *(_QWORD *)(a2 + 392);
  }
  while ( a2 );
  return result;
}
