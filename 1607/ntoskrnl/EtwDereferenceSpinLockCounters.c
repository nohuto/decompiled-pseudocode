/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x1406A5578
 * Callers:
 *     KiSynchCounterSetCallback @ 0x14064F6A0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F7A0 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     EtwpUpdateKernelGroupMasks @ 0x140495D10 (EtwpUpdateKernelGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    dword_1402FD544 &= ~0x200000u;
    EtwpUpdateKernelGroupMasks(0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
