/*
 * XREFs of PoGetFrequencyBucket @ 0x140170614
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  unsigned int CurrentFrequency; // kr00_4
  __int64 result; // rax

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
  result = 3LL;
  if ( CurrentFrequency / 0x19 < 3 )
    return CurrentFrequency / 0x19;
  return result;
}
