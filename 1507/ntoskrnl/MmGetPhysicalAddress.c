/*
 * XREFs of MmGetPhysicalAddress @ 0x1400DF958
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140148C64 (HvlQueryHypervisorTscAdjustment.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     PopGetNextTable @ 0x14014DAD8 (PopGetNextTable.c)
 *     BgpFwLibraryEnable @ 0x14015003C (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x14016337C (HvlEnlightenProcessor.c)
 *     HvlGetCoverageData @ 0x1401E4A7C (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401E4E54 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401E530C (HvlResetCoverageVector.c)
 *     HvlpMapStatisticsPage @ 0x1401E6A38 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E7698 (HvlpSetupCachedHypercallPages.c)
 *     HvlEnterSleepState @ 0x1401E7CD8 (HvlEnterSleepState.c)
 *     HvlMapDeviceInterrupt @ 0x1401E8CA8 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E9568 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401E9768 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401E992C (HvlNotifyRootCrashdump.c)
 *     HvlSetHpetConfig @ 0x1401E9F98 (HvlSetHpetConfig.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401EA62C (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401EA7F8 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401EAFC0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401EB3A0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401EB8CC (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401EC2B4 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpDetermineEnlightenments @ 0x1401EE7C4 (HvlpDetermineEnlightenments.c)
 *     HvlCollectLivedump @ 0x1401EEF4C (HvlCollectLivedump.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1401EF3C4 (HvlPrepareLivedumpDescriptor.c)
 *     HvlpLogIommuInitStatus @ 0x1401EFDF0 (HvlpLogIommuInitStatus.c)
 *     HvlpGetSecurePageList @ 0x1401F064C (HvlpGetSecurePageList.c)
 *     sub_1401F073C @ 0x1401F073C (sub_1401F073C.c)
 *     HvlpSetupPageListIteration @ 0x1401F08F8 (HvlpSetupPageListIteration.c)
 *     IoFreeDumpRange @ 0x1401F3568 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401F3904 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F5530 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1401FC738 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1401FCCF4 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 *     SmEtwLogStoreCorruption @ 0x140257364 (SmEtwLogStoreCorruption.c)
 *     HvlpFlushRangeListTb @ 0x140270BD0 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x140270FD8 (HvlpFlushRangeListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140271660 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402718A0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x1403F3B20 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403F4B2C (PopRequestWrite.c)
 *     PopRequestRead @ 0x1403F5BC4 (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140677C2C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiScrubNonPagedPool @ 0x1406A49A4 (MiScrubNonPagedPool.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 *     HvlpInitializeIum @ 0x1407F9184 (HvlpInitializeIum.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1400DF980 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
