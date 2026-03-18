/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x140664D88
 * Callers:
 *     KiSynchCounterSetCallback @ 0x14061A46C (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14061A56C (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404B8124 (EtwpUpdateKernelGroupMasks.c)
 */

LONG EtwReferenceSpinLockCounters()
{
  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( ++EtwpSpinLockCountersCount == 1 )
  {
    dword_1402D84A4 |= 0x200000u;
    EtwpUpdateKernelGroupMasks(0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
