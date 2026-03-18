/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x1406E7E60
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140698A90 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140698B8C (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpUpdateKernelGroupMasks @ 0x14054A8A8 (EtwpUpdateKernelGroupMasks.c)
 */

LONG EtwReferenceSpinLockCounters()
{
  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( ++EtwpSpinLockCountersCount == 1 )
  {
    dword_1403277E4 |= 0x200000u;
    EtwpUpdateKernelGroupMasks(0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
