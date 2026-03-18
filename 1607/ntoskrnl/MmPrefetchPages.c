/*
 * XREFs of MmPrefetchPages @ 0x14042C0D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
