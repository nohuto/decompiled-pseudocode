/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1400EC740
 * Callers:
 *     KeUpdateThreadSchedulingProperties @ 0x14000B9FC (KeUpdateThreadSchedulingProperties.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400A15C0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400EBAC0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400ECD50 (KiTransitionSchedulingGroupGeneration.c)
 *     KiChooseLowestRankedThread @ 0x1400ED5E4 (KiChooseLowestRankedThread.c)
 *     KiAddThreadToReadyQueue @ 0x1400ED780 (KiAddThreadToReadyQueue.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400ED9BC (KiDeferGroupSchedulingPreemption.c)
 *     KiCheckForEffectivePriorityChange @ 0x140121E0C (KiCheckForEffectivePriorityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14013328C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdatePriorityMatrix @ 0x14017E4D4 (KiUpdatePriorityMatrix.c)
 *     KeTransitionProcessorParkState @ 0x14020AF40 (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x1403FA120 (KiConfigureSchedulingInformation.c)
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
