/*
 * XREFs of KeIsEmptyAffinityEx @ 0x1400D26B0
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14009C8B8 (KiGetNextTimerExpirationDueTime.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF0CC (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1401D717C (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x1401FF35C (PoInitiateProcessorWake.c)
 *     PpmIdleDurationExpiration @ 0x1402003A4 (PpmIdleDurationExpiration.c)
 *     PpmUnlockProcessors @ 0x140201324 (PpmUnlockProcessors.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8 (KiConfigureHeteroProcessorsTarget.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1404D53D0 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054CD14 (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x14056A91C (PpmParkParkingAvailable.c)
 *     PpmHeteroDetectFavoredCores @ 0x14056ADB4 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14056AF18 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
