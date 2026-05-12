/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C000C0F8
 * Callers:
 *     RaidStallDeviceQueue @ 0x1C000BF84 (RaidStallDeviceQueue.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0003964 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000C19C (RaidResumeUnitQueue.c)
 */

void __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  if ( KeSetCoalescableTimer((PKTIMER)(a1 + 792), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 856)) )
  {
    if ( (unsigned int)RaidResumeUnitQueue(a1) )
      RaidRestartIoQueue(a1);
  }
}
