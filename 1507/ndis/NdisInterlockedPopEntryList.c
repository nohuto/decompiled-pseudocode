/*
 * XREFs of NdisInterlockedPopEntryList @ 0x1C0055120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSINGLE_LIST_ENTRY __stdcall NdisInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  return ExInterlockedPopEntryList(ListHead, Lock);
}
