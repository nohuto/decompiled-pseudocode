/*
 * XREFs of ExAcquireSpinLockShared @ 0x140079490
 * Callers:
 *     MiAcquireProperVm @ 0x140007D88 (MiAcquireProperVm.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140008104 (SepGetSingletonEntryFromIndexNumber.c)
 *     MiFindLastSubsection @ 0x1400081A0 (MiFindLastSubsection.c)
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MiReferencePfBackedSection @ 0x14000E638 (MiReferencePfBackedSection.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140015C24 (MmQuerySystemWorkingSetInformation.c)
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     MiReferenceInPageFile @ 0x140039C9C (MiReferenceInPageFile.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiQueryAddressSpan @ 0x14005E760 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiGetControlAreaPtes @ 0x140062620 (MiGetControlAreaPtes.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     MiStartingOffsetNeedLock @ 0x14007C8C0 (MiStartingOffsetNeedLock.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiLocateSubsectionNode @ 0x1400AAEC0 (MiLocateSubsectionNode.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     PopFxLockDevice @ 0x1400DA88C (PopFxLockDevice.c)
 *     PopPepLockActivityLink @ 0x1400DBDD8 (PopPepLockActivityLink.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400DF9F4 (MiSystemImageHasPrivateFixups.c)
 *     MiLockProtoPage @ 0x1400E1EC0 (MiLockProtoPage.c)
 *     MmQueryWorkingSetInformation @ 0x1400E2C20 (MmQueryWorkingSetInformation.c)
 *     MiLockProbePacketWorkingSet @ 0x1400E87A0 (MiLockProbePacketWorkingSet.c)
 *     MiAllowProtectionChange @ 0x1400F5AE4 (MiAllowProtectionChange.c)
 *     MmIsFileObjectAPagingFile @ 0x140103648 (MmIsFileObjectAPagingFile.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     MiTransientCombineAddress @ 0x140116E50 (MiTransientCombineAddress.c)
 *     MiRestrictRangeToNode @ 0x140131AC8 (MiRestrictRangeToNode.c)
 *     MiExceptionForMappedVa @ 0x1401CE990 (MiExceptionForMappedVa.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MmAddRangeToCrashDump @ 0x1401D61E4 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1401D6658 (MmRemoveSystemCacheFromDump.c)
 *     MiComparePteProtections @ 0x1401D74D0 (MiComparePteProtections.c)
 *     PopPepGetComponentVetoMasks @ 0x1401ED400 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1401ED494 (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetDeviceVetoMasks @ 0x1401ED550 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1401ED5CC (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1401ED680 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1401EDE44 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1401EE0C0 (PopPepRegisterComponentPerfStates.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402010E8 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14020BF08 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x140213F80 (ExpCheckForResource.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x140223B2C (RtlpSparseBitmapCtxLockShared.c)
 *     ExQuerySystemLockInformation @ 0x1403B2F6C (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl
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
