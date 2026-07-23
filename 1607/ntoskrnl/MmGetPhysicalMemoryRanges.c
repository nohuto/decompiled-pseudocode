/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1404C8434
 * Callers:
 *     PfpMemoryRangesQuery @ 0x1400AE2E8 (PfpMemoryRangesQuery.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014A114 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1401C5444 (IoFillDumpHeader.c)
 * Callees:
 *     <none>
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
