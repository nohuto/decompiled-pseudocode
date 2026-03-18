/*
 * XREFs of MiVadMapsLargeImage @ 0x14002C410
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140133E5C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401DFA24 (MiIsVadEligibleForCommitRelease.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040C688 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     MiMarkPrivateImageCfgBits @ 0x1404F45BC (MiMarkPrivateImageCfgBits.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 7) == 2 && (*(_BYTE *)(a1 + 67) & 1) != 0;
}
