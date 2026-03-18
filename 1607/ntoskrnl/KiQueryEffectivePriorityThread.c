/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x1400D016C
 * Callers:
 *     KiSwapThread @ 0x14005B200 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14005B980 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005BD20 (KiSearchForNewThreadOnProcessor.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KiUpdateThreadState @ 0x140091CEC (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091DA8 (KiUpdateThreadPriority.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A6E74 (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C8E18 (KeUpdateThreadSchedulingProperties.c)
 *     KiSelectNextThread @ 0x1400CA5B0 (KiSelectNextThread.c)
 *     KiRemoveBoostThread @ 0x1400CF3B0 (KiRemoveBoostThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CFE18 (KiDeferGroupSchedulingPreemption.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D24A0 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D3870 (KiTransitionSchedulingGroupGeneration.c)
 *     KeQueryEffectivePriorityThread @ 0x1401102F4 (KeQueryEffectivePriorityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140111090 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeTransitionProcessorParkState @ 0x1401DBC78 (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D0190 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KiQueryEffectivePriorityThread(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 result; // rax

  v3 = (unsigned __int8)KiIsThreadRankNonZero(a1, a2) == 0;
  result = 1LL;
  if ( v3 )
    return (unsigned int)*(char *)(a1 + 195);
  return result;
}
