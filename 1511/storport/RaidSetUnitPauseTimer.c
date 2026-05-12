/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C0009BF0
 * Callers:
 *     RaidStallDeviceQueue @ 0x1C0009B00 (RaidStallDeviceQueue.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0009DC4 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C000C030 (RaidRestartIoQueue.c)
 */

char __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  int v3; // eax

  LOBYTE(v3) = KeSetCoalescableTimer((PKTIMER)(a1 + 792), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 856));
  if ( (_BYTE)v3 )
  {
    v3 = RaidResumeUnitQueue(a1);
    if ( v3 )
      LOBYTE(v3) = RaidRestartIoQueue(a1);
  }
  return v3;
}
