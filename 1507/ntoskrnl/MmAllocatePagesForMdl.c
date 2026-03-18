/*
 * XREFs of MmAllocatePagesForMdl @ 0x14013A010
 * Callers:
 *     VerifierMmAllocatePagesForMdl @ 0x1407534EC (VerifierMmAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)MiAllocatePagesForMdl(
                 (__int64)MiSystemPartition,
                 LowAddress.QuadPart,
                 HighAddress.QuadPart,
                 SkipBytes.QuadPart,
                 TotalBytes,
                 3,
                 *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL),
                 0);
}
