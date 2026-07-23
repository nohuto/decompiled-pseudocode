/*
 * XREFs of MiVadDeleted @ 0x14002BEF0
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x14042D054 (MiPrepareVadDelete.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MiPopulateCfgBitMap @ 0x1404D7414 (MiPopulateCfgBitMap.c)
 *     NtAreMappedFilesTheSame @ 0x1405298F4 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x14065B7C8 (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 19) & 1;
}
