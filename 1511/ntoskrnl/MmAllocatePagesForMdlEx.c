/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1400BC654
 * Callers:
 *     PopGenerateScratchMdl @ 0x140117AE0 (PopGenerateScratchMdl.c)
 *     PopGenerateMdl @ 0x140118B28 (PopGenerateMdl.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     PspIumAllocatePhysicalPages @ 0x1401F5F78 (PspIumAllocatePhysicalPages.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140202DD0 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1406CFACC (VerifierMmAllocatePagesForMdlEx.c)
 *     ResFwGetContext @ 0x1406D9404 (ResFwGetContext.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1400BC6B8 (MmAllocateNodePagesForMdlEx.c)
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
