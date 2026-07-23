/*
 * XREFs of ExAcquireSpinLockShared @ 0x1400E9040
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     MiLockWorkingSetShared @ 0x140014170 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     IopFindDiskIoAttribution @ 0x14001EE78 (IopFindDiskIoAttribution.c)
 *     MiLocateSubsectionNode @ 0x140021740 (MiLocateSubsectionNode.c)
 *     MiReferenceInPageFile @ 0x1400249D0 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiGetControlAreaPtes @ 0x14002C3F0 (MiGetControlAreaPtes.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14006E8F8 (IopReferenceIoAttributionFromProcess.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14007CF64 (SepGetSingletonEntryFromIndexNumber.c)
 *     PopFxLockDevice @ 0x140085838 (PopFxLockDevice.c)
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x14008F2E0 (MiReferencePfBackedSection.c)
 *     MiStartingOffsetNeedLock @ 0x14009944C (MiStartingOffsetNeedLock.c)
 *     MiSystemImageHasPrivateFixups @ 0x140099A90 (MiSystemImageHasPrivateFixups.c)
 *     MiLockProbePacketWorkingSet @ 0x14009A2A8 (MiLockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x14009EE10 (MmQueryWorkingSetInformation.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     MmQueryCommitReleaseState @ 0x1400AEEB0 (MmQueryCommitReleaseState.c)
 *     MiAllowProtectionChange @ 0x1400B5348 (MiAllowProtectionChange.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1400B6A2C (MiLockProtoPage.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400BE230 (MmQuerySystemWorkingSetInformation.c)
 *     PopPepLockActivityLink @ 0x1400C059C (PopPepLockActivityLink.c)
 *     MiMarkSharedImageCfgBits @ 0x1400E7910 (MiMarkSharedImageCfgBits.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     ExProtectPoolEx @ 0x1400E80E0 (ExProtectPoolEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400E9DD0 (IoSetDiskIoAttributionFromThread.c)
 *     MiFindLastSubsection @ 0x1400FAEB0 (MiFindLastSubsection.c)
 *     MmIsFileObjectAPagingFile @ 0x14010DFD0 (MmIsFileObjectAPagingFile.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140110E9C (PopPepGetDevicePlatformStateDependents.c)
 *     MiRestrictRangeToNode @ 0x14013BB78 (MiRestrictRangeToNode.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 *     MiExceptionForMappedVa @ 0x1401E11D0 (MiExceptionForMappedVa.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401E3E60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 *     MmAddRangeToCrashDump @ 0x1401E7880 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1401E7CFC (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1401E828C (MiLeapPrefetch.c)
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 *     MiTransientCombineAddress @ 0x1401FB36C (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1401FC268 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x140205E68 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x140205EFC (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140205F78 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14020602C (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402067F4 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140206A70 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14020F848 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AA48 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140223ACC (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14022D9F4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1403DFCAC (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v2; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v2 = *SpinLock & 0x7FFFFFFF;
    if ( v2 != _InterlockedCompareExchange(SpinLock, v2 + 1, v2) )
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
  }
  return CurrentIrql;
}
