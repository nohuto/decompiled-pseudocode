/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1400AA410
 * Callers:
 *     PopGenerateMdl @ 0x1401130EC (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x1401232F8 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x140129508 (BgpFwAllocateMemory.c)
 *     PspIumAllocatePhysicalPages @ 0x1402100F8 (PspIumAllocatePhysicalPages.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14021CAF8 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ResFwGetContext @ 0x140725238 (ResFwGetContext.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1400AA474 (MmAllocateNodePagesForMdlEx.c)
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
