/*
 * XREFs of MiVadDeleted @ 0x14002C370
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x14042E184 (MiPrepareVadDelete.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     MiPopulateCfgBitMap @ 0x1404F4488 (MiPopulateCfgBitMap.c)
 *     NtAreMappedFilesTheSame @ 0x1405293B4 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 19) & 1;
}
