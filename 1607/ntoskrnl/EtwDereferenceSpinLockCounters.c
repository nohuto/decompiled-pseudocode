/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x1406A56B0
 * Callers:
 *     KiSynchCounterSetCallback @ 0x14064F784 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F884 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404967A0 (EtwpUpdateKernelGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    dword_1402FD524 &= ~0x200000u;
    EtwpUpdateKernelGroupMasks(0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
