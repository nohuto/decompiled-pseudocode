/*
 * XREFs of VerifierExpInterlockedPushEntrySList @ 0x14025AFAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall VerifierExpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  return pXdvExpInterlockedPushEntrySList(ListHead, ListEntry);
}
