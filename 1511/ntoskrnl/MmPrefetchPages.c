/*
 * XREFs of MmPrefetchPages @ 0x1404D9B6C
 * Callers:
 *     VerifierMmPrefetchPages @ 0x1406C0AE8 (VerifierMmPrefetchPages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
