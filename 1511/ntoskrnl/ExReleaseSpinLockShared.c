/*
 * XREFs of ExReleaseSpinLockShared @ 0x14000A410
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
 *     ExpAddTagForBigPages @ 0x140041A10 (ExpAddTagForBigPages.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiQueryAddressSpan @ 0x14005E760 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiLocateSubsectionNode @ 0x1400AAEC0 (MiLocateSubsectionNode.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     PopFxLockDevice @ 0x1400DA88C (PopFxLockDevice.c)
 *     PopPepReleaseActivityLink @ 0x1400DBAC0 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x1400DBDD8 (PopPepLockActivityLink.c)
 *     MiLockProtoPage @ 0x1400E1EC0 (MiLockProtoPage.c)
 *     MmQueryWorkingSetInformation @ 0x1400E2C20 (MmQueryWorkingSetInformation.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400E86F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiAllowProtectionChange @ 0x1400F5AE4 (MiAllowProtectionChange.c)
 *     MmIsFileObjectAPagingFile @ 0x140103648 (MmIsFileObjectAPagingFile.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     MiTransientCombineAddress @ 0x140116E50 (MiTransientCombineAddress.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
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
 *     ViIrpDatabaseReleaseLockShared @ 0x14020BF40 (ViIrpDatabaseReleaseLockShared.c)
 *     ExpCheckForResource @ 0x140213F80 (ExpCheckForResource.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x140223C08 (RtlpSparseBitmapCtxUnlockShared.c)
 *     ExQuerySystemLockInformation @ 0x1403B2F6C (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockShared(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  __writecr8(OldIrql);
}
