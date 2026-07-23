/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1400A8990
 * Callers:
 *     PopGenerateMdl @ 0x14011365C (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140123868 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     PspIumAllocatePhysicalPages @ 0x14020FF24 (PspIumAllocatePhysicalPages.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14021C924 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ResFwGetContext @ 0x140725238 (ResFwGetContext.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1400A89F4 (MmAllocateNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocateNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL),
                 Flags);
}
