/*
 * XREFs of VerifierExpInterlockedFlushSList @ 0x1406C0458
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall VerifierExpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return pXdvExpInterlockedFlushSList(ListHead);
}
