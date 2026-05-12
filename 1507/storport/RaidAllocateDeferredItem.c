/*
 * XREFs of RaidAllocateDeferredItem @ 0x1C0025DE0
 * Callers:
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0021AD8 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0022168 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     StorPortBusy @ 0x1C0027870 (StorPortBusy.c)
 *     StorPortReady @ 0x1C0028090 (StorPortReady.c)
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
