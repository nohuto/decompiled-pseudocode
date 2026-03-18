/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1400BC1BC
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14039F1FC (PopBuildMemoryImageHeader.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1404836F0 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14054E350 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned int a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1402FEC28 + 8LL * a1) + 5704LL);
}
