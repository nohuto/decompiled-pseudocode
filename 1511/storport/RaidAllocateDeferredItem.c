/*
 * XREFs of RaidAllocateDeferredItem @ 0x1C00077C0
 * Callers:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0007758 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0024118 (RaidAdapterLogIoErrorDeferred.c)
 *     StorPortBusy @ 0x1C0029B20 (StorPortBusy.c)
 *     StorPortReady @ 0x1C002A300 (StorPortReady.c)
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
