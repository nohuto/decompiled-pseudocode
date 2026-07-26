/*
 * XREFs of NdisInterlockedPushEntryList @ 0x1C00599F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSINGLE_LIST_ENTRY __stdcall NdisInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  return ExInterlockedPushEntryList(ListHead, ListEntry, Lock);
}
