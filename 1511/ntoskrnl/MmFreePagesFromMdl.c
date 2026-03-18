/*
 * XREFs of MmFreePagesFromMdl @ 0x140011F04
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     sub_14014EFB8 @ 0x14014EFB8 (sub_14014EFB8.c)
 *     PspIumAllocatePhysicalPages @ 0x1401F5F78 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1401F6098 (PspIumFreePhysicalPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140205848 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140623364 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1406234E8 (MmFreeNonCachedMemory.c)
 *     VerifierMmFreePagesFromMdl @ 0x1406CFD80 (VerifierMmFreePagesFromMdl.c)
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     KiComputeNumaCosts @ 0x14074ED1C (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((__int64)&MiSystemPartition, (ULONG_PTR)MemoryDescriptorList, 0);
}
