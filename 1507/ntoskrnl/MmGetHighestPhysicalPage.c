/*
 * XREFs of MmGetHighestPhysicalPage @ 0x140045B2C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14048AB10 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1405C61D8 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned int a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14034F0E8 + 8LL * a1) + 5320LL);
}
