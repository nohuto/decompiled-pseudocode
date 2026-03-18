/*
 * XREFs of VerifierMmPrefetchPages @ 0x140742328
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierMmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return pXdvMmPrefetchPages(NumberOfLists, ReadLists);
}
