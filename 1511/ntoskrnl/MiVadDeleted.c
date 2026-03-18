/*
 * XREFs of MiVadDeleted @ 0x140063AA0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 *     MiDereferenceVad @ 0x1401E1DB4 (MiDereferenceVad.c)
 *     MiPopulateCfgBitMap @ 0x1403CAE30 (MiPopulateCfgBitMap.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiPrepareVadDelete @ 0x14049CCA4 (MiPrepareVadDelete.c)
 *     MmIsFileMapped @ 0x140625E58 (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x80000) != 0;
}
