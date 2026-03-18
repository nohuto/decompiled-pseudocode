/*
 * XREFs of VerifierExInterlockedPopEntryList @ 0x1406C03B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSINGLE_LIST_ENTRY __stdcall VerifierExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  return pXdvExInterlockedPopEntryList(ListHead, Lock);
}
