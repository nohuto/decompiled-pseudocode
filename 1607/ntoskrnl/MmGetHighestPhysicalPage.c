/*
 * XREFs of MmGetHighestPhysicalPage @ 0x14000F70C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041A0E0 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14056D238 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 MmGetHighestPhysicalPage()
{
  return *(_QWORD *)(*(_QWORD *)qword_140327038 + 6280LL);
}
