/*
 * XREFs of IopLiveDumpAllocNonPagedPool @ 0x1401CAD8C
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1406276C4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopLiveDumpAllocNonPagedPool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, 0x706D644Cu);
}
