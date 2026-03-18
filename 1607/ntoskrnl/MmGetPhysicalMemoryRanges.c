/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1404E5A00
 * Callers:
 *     PfpMemoryRangesQuery @ 0x1400B0144 (PfpMemoryRangesQuery.c)
 *     IopGetPhysicalMemoryBlock @ 0x140149BA4 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1401C55A4 (IoFillDumpHeader.c)
 * Callees:
 *     <none>
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
