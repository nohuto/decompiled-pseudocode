/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x140076D2C
 * Callers:
 *     PopGenerateMdl @ 0x14014D604 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x14014D830 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     PspIumAllocatePhysicalPages @ 0x140244BC0 (PspIumAllocatePhysicalPages.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140252034 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140753598 (VerifierMmAllocatePagesForMdlEx.c)
 *     ResFwGetContext @ 0x14075C3F0 (ResFwGetContext.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x140076D90 (MmAllocateNodePagesForMdlEx.c)
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
