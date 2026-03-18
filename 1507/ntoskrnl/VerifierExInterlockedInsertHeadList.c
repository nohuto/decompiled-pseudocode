/*
 * XREFs of VerifierExInterlockedInsertHeadList @ 0x140741B94
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall VerifierExInterlockedInsertHeadList(
        PLIST_ENTRY ListHead,
        PLIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  return pXdvExInterlockedInsertHeadList(ListHead, ListEntry, Lock);
}
