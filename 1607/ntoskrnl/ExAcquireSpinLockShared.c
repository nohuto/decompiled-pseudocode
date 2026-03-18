/*
 * XREFs of ExAcquireSpinLockShared @ 0x1400EB1D0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExReferenceCallBackBlock @ 0x140013F80 (ExReferenceCallBackBlock.c)
 *     MiLockWorkingSetShared @ 0x1400145F0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140015DAC (MiMakeSystemAddressValid.c)
 *     MiPageToNode @ 0x14001BA54 (MiPageToNode.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     IopFindDiskIoAttribution @ 0x14001F2F8 (IopFindDiskIoAttribution.c)
 *     MiLocateSubsectionNode @ 0x140021BC0 (MiLocateSubsectionNode.c)
 *     MiReferenceInPageFile @ 0x140024E50 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiGetControlAreaPtes @ 0x14002C870 (MiGetControlAreaPtes.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     PfSnGetFileInformation @ 0x140037630 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressSpan @ 0x140042CC0 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     PsGetWorkOnBehalfThread @ 0x14005E874 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14006ED78 (IopReferenceIoAttributionFromProcess.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14007CEE4 (SepGetSingletonEntryFromIndexNumber.c)
 *     MiTrimSection @ 0x14008F514 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x14008FB80 (MiReferencePfBackedSection.c)
 *     MiStartingOffsetNeedLock @ 0x140099C4C (MiStartingOffsetNeedLock.c)
 *     MiSystemImageHasPrivateFixups @ 0x14009A290 (MiSystemImageHasPrivateFixups.c)
 *     MiLockProbePacketWorkingSet @ 0x14009AAA8 (MiLockProbePacketWorkingSet.c)
 *     PopFxLockDevice @ 0x14009EDE0 (PopFxLockDevice.c)
 *     MmQueryWorkingSetInformation @ 0x1400A04E8 (MmQueryWorkingSetInformation.c)
 *     MiAcquireProperVm @ 0x1400A4200 (MiAcquireProperVm.c)
 *     MmQueryCommitReleaseState @ 0x1400B0E40 (MmQueryCommitReleaseState.c)
 *     MiAllowProtectionChange @ 0x1400B74B0 (MiAllowProtectionChange.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1400B8B9C (MiLockProtoPage.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400C03A0 (MmQuerySystemWorkingSetInformation.c)
 *     PopPepLockActivityLink @ 0x1400C270C (PopPepLockActivityLink.c)
 *     MiMarkSharedImageCfgBits @ 0x1400E9AA0 (MiMarkSharedImageCfgBits.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     ExProtectPoolEx @ 0x1400EA270 (ExProtectPoolEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400EBF60 (IoSetDiskIoAttributionFromThread.c)
 *     MiFindLastSubsection @ 0x1400FD130 (MiFindLastSubsection.c)
 *     MmIsFileObjectAPagingFile @ 0x14010DA6C (MmIsFileObjectAPagingFile.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140110938 (PopPepGetDevicePlatformStateDependents.c)
 *     MiRestrictRangeToNode @ 0x14013B608 (MiRestrictRangeToNode.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF4E0 (MiCheckCommitReleaseFromVad.c)
 *     MiExceptionForMappedVa @ 0x1401E13A4 (MiExceptionForMappedVa.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401E4034 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1401E4198 (MmUnmapReservedMapping.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 *     MmAddRangeToCrashDump @ 0x1401E7A54 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1401E7ED0 (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1401E8460 (MiLeapPrefetch.c)
 *     MiAllocateCombineProto @ 0x1401F7B48 (MiAllocateCombineProto.c)
 *     MiTransientCombineAddress @ 0x1401FB540 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1401FC43C (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x14020603C (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402060D0 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14020614C (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140206200 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402069C8 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140206C44 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14020FA1C (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AC1C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140223CA0 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14022DBC8 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1403DFCAC (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089C20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DDDC (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
