/*
 * XREFs of RaidDeleteDeviceQueueEntry @ 0x1C0010ACC
 * Callers:
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RiDeleteDeviceQueueEntry @ 0x1C0010B1C (RiDeleteDeviceQueueEntry.c)
 */

void __fastcall RaidDeleteDeviceQueueEntry(__int64 a1, unsigned int a2)
{
  KIRQL v4; // bl

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDeleteDeviceQueueEntry(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
