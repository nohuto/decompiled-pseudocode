/*
 * XREFs of VerifierExInterlockedRemoveHeadList @ 0x140741BB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall VerifierExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  return pXdvExInterlockedRemoveHeadList(ListHead, Lock);
}
