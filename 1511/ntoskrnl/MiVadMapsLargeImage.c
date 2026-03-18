/*
 * XREFs of MiVadMapsLargeImage @ 0x1400627D0
 * Callers:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401CF8BC (MiIsVadEligibleForCommitRelease.c)
 *     MiMarkPrivateImageCfgBits @ 0x1403CA63C (MiMarkPrivateImageCfgBits.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 7) == 2 && (*(_BYTE *)(a1 + 67) & 1) != 0;
}
