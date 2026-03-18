/*
 * XREFs of VerifierExpInterlockedPopEntrySList @ 0x140741C54
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
