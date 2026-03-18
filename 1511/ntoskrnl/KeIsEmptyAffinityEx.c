/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140077130
 * Callers:
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400352DC (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     KeRemoveQueueDpcEx @ 0x1400D948C (KeRemoveQueueDpcEx.c)
 *     HvlParkedVirtualProcessors @ 0x1401B2898 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1401C8324 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x1401E6BAC (PoInitiateProcessorWake.c)
 *     PpmIdleDurationExpiration @ 0x1401E79C0 (PpmIdleDurationExpiration.c)
 *     PpmUnlockProcessors @ 0x1401E8AD0 (PpmUnlockProcessors.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1403B0E78 (KiConfigureHeteroProcessorsTarget.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1404B7374 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140517F80 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x140537328 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x140537528 (PpmParkParkingAvailable.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
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
