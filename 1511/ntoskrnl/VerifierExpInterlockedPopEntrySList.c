/*
 * XREFs of VerifierExpInterlockedPopEntrySList @ 0x1406C0460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall VerifierExpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  return pXdvExpInterlockedPopEntrySList(ListHead);
}
