/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x140014D6C
 * Callers:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140029684 (KiDeferGroupSchedulingPreemption.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14007B7B0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140095C70 (KeUpdateThreadSchedulingProperties.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400C44B0 (KiCheckForEffectivePriorityChange.c)
 *     KeQueryEffectivePriorityThread @ 0x140105854 (KeQueryEffectivePriorityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140106E54 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x1403A8B9C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140014D90 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KiQueryEffectivePriorityThread(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = (unsigned __int8)KiIsThreadRankNonZero(a1, a2) == 0;
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(v3 + 195);
  return result;
}
