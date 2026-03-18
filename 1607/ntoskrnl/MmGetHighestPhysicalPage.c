/*
 * XREFs of MmGetHighestPhysicalPage @ 0x14000FB8C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041B220 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14056CCF8 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 MmGetHighestPhysicalPage()
{
  return *(_QWORD *)(*(_QWORD *)qword_140326FF8 + 6280LL);
}
