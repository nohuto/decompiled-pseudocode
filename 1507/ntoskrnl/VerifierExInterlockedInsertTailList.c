/*
 * XREFs of VerifierExInterlockedInsertTailList @ 0x140741B9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall VerifierExInterlockedInsertTailList(
        PLIST_ENTRY ListHead,
        PLIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  return pXdvExInterlockedInsertTailList(ListHead, ListEntry, Lock);
}
