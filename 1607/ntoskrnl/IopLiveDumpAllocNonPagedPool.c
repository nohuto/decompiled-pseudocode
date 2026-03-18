/*
 * XREFs of IopLiveDumpAllocNonPagedPool @ 0x1401CAEA8
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140627610 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14062782C (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopLiveDumpAllocNonPagedPool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, 0x706D644Cu);
}
