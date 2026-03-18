/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1404AE288
 * Callers:
 *     ExpWorkerHotAddProcessor @ 0x1403B3244 (ExpWorkerHotAddProcessor.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x1405F7004 (IoEnableIrpCredits.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiDynamicProcessorLock.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&KiDynamicProcessorLock);
      KeReleaseGuardedMutex(&KiDynamicProcessorLock);
    }
  }
}
