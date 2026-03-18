/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1404D22CC
 * Callers:
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     IoEnableIrpCredits @ 0x140620D0C (IoEnableIrpCredits.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
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
