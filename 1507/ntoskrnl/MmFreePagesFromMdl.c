/*
 * XREFs of MmFreePagesFromMdl @ 0x14012B94C
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     sub_14017D17C @ 0x14017D17C (sub_14017D17C.c)
 *     PspIumAllocatePhysicalPages @ 0x140244BC0 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140244CE0 (PspIumFreePhysicalPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x1406A2544 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1406A27D0 (MmFreeNonCachedMemory.c)
 *     VerifierMmFreePagesFromMdl @ 0x14075384C (VerifierMmFreePagesFromMdl.c)
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((__int64)MiSystemPartition, (ULONG_PTR)MemoryDescriptorList, 0);
}
