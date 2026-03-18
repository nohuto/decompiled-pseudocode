/*
 * XREFs of VerifierExInterlockedPushEntryList @ 0x140741BAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSINGLE_LIST_ENTRY __stdcall VerifierExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  return pXdvExInterlockedPushEntryList(ListHead, ListEntry, Lock);
}
