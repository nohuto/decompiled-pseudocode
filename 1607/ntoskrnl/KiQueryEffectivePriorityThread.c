/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x1400CE00C
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A53EC (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C6CB8 (KeUpdateThreadSchedulingProperties.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CDCB8 (KiDeferGroupSchedulingPreemption.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D1710 (KiTransitionSchedulingGroupGeneration.c)
 *     KeQueryEffectivePriorityThread @ 0x140110858 (KeQueryEffectivePriorityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400CE030 (KiIsThreadRankNonZero.c)
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
