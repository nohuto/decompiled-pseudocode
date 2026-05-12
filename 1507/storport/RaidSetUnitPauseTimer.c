/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C0010A8C
 * Callers:
 *     RaidStallDeviceQueue @ 0x1C001099C (RaidStallDeviceQueue.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0011A64 (RaidResumeUnitQueue.c)
 */

void __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  if ( KeSetCoalescableTimer((PKTIMER)(a1 + 768), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 832)) )
  {
    if ( (unsigned int)RaidResumeUnitQueue(a1) )
      RaidRestartIoQueue(a1);
  }
}
