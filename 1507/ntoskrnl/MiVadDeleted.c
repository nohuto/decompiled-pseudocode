/*
 * XREFs of MiVadDeleted @ 0x14008964C
 * Callers:
 *     MiPopulateCfgBitMap @ 0x1404215A8 (MiPopulateCfgBitMap.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiPrepareVadDelete @ 0x14051135C (MiPrepareVadDelete.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return *(_DWORD *)(a1 + 48) >> 31;
}
