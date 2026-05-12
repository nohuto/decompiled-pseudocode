/*
 * XREFs of RaidAllocateDeferredItem @ 0x1C0019BA0
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0019B38 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0027504 (RaidAdapterLogIoErrorDeferred.c)
 *     StorPortBusy @ 0x1C002D6B0 (StorPortBusy.c)
 *     StorPortReady @ 0x1C002DFC0 (StorPortReady.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaidAllocateDeferredItem(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax

  result = ExpInterlockedPopEntrySList(a1 + 5);
  if ( result )
    LODWORD(result[1].Next) = 134684674;
  return result;
}
