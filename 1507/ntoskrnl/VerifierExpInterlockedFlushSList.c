/*
 * XREFs of VerifierExpInterlockedFlushSList @ 0x140741C4C
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
