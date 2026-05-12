/*
 * XREFs of RaidDeleteDeviceQueueEntry @ 0x1C000C324
 * Callers:
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C00268C8 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     RiDeleteDeviceQueueEntry @ 0x1C000C374 (RiDeleteDeviceQueueEntry.c)
 */

void __fastcall RaidDeleteDeviceQueueEntry(__int64 a1, unsigned int a2)
{
  KIRQL v4; // bl

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDeleteDeviceQueueEntry(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
