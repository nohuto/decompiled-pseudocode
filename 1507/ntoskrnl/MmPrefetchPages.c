/*
 * XREFs of MmPrefetchPages @ 0x14053B49C
 * Callers:
 *     VerifierMmPrefetchPages @ 0x140742328 (VerifierMmPrefetchPages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, (__int64)ReadLists, 0LL);
}
