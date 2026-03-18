/*
 * XREFs of KeIsEmptyAffinityEx @ 0x1400D4810
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140085D28 (KeRemoveQueueDpcEx.c)
 *     MmOutSwapProcess @ 0x14009126C (MmOutSwapProcess.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14009D0B8 (KiGetNextTimerExpirationDueTime.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF1E8 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1401D7350 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x1401FF530 (PoInitiateProcessorWake.c)
 *     PpmIdleDurationExpiration @ 0x140200578 (PpmIdleDurationExpiration.c)
 *     PpmUnlockProcessors @ 0x1402014F8 (PpmUnlockProcessors.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8 (KiConfigureHeteroProcessorsTarget.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1404F2444 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054C7D4 (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14056A1B4 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x14056A3DC (PpmParkParkingAvailable.c)
 *     PpmHeteroDetectFavoredCores @ 0x14056A874 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14056A9D8 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
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
