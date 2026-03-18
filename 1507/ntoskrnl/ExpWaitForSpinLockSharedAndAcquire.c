/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14000C528 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRundownMutants @ 0x14000DF1C (KiRundownMutants.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     MmLockLoadedModuleListShared @ 0x140010828 (MmLockLoadedModuleListShared.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x140025A3C (ViAvlAcquireTableLockAtDpcLevel.c)
 *     PopPepLockActivityLink @ 0x1400281A4 (PopPepLockActivityLink.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14002D234 (SepGetSingletonEntryFromIndexNumber.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiQueryAddressSpan @ 0x14003AE40 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExpAddTagForBigPages @ 0x140046960 (ExpAddTagForBigPages.c)
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     KeQueryBasePriorityThread @ 0x1400506E0 (KeQueryBasePriorityThread.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiEndingOffsetWithLock @ 0x140055090 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x140055170 (MiStartingOffsetNeedLock.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExProtectPool @ 0x14005EE00 (ExProtectPool.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x14007B590 (MiLockProtoPage.c)
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiFindLastSubsection @ 0x140082B4C (MiFindLastSubsection.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 *     MmIsFileObjectAPagingFile @ 0x140086080 (MmIsFileObjectAPagingFile.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiGetControlAreaPtes @ 0x14008A830 (MiGetControlAreaPtes.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiAllowProtectionChange @ 0x1400DCB94 (MiAllowProtectionChange.c)
 *     MiAbortCombineScan @ 0x1400E59F8 (MiAbortCombineScan.c)
 *     KeQueryAffinityProcess @ 0x1400F07A0 (KeQueryAffinityProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1400F090C (MmQueryWorkingSetInformation.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 *     MiAcquireProperVm @ 0x1400FB9F8 (MiAcquireProperVm.c)
 *     MiReferencePfBackedSection @ 0x1400FD148 (MiReferencePfBackedSection.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 *     ExAcquireSpinLockShared @ 0x140102780 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1401027C8 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSystemImageHasPrivateFixups @ 0x140111970 (MiSystemImageHasPrivateFixups.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140113204 (MmQuerySystemWorkingSetInformation.c)
 *     MiLockProbePacketWorkingSet @ 0x14011B678 (MiLockProbePacketWorkingSet.c)
 *     PopFxLockDevice @ 0x14011BF2C (PopFxLockDevice.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140131F0C (vDbgPrintExWithPrefixInternal.c)
 *     MiLeapPrefetch @ 0x14015C0CC (MiLeapPrefetch.c)
 *     DbgEnumerateCallback @ 0x14015DA6C (DbgEnumerateCallback.c)
 *     MiRestrictRangeToNode @ 0x14015F6F4 (MiRestrictRangeToNode.c)
 *     KiAcquireProcessLockShared @ 0x14020A50C (KiAcquireProcessLockShared.c)
 *     KiSelectCandidateProcessor @ 0x14020B500 (KiSelectCandidateProcessor.c)
 *     MiExceptionForMappedVa @ 0x14020DC94 (MiExceptionForMappedVa.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020EB90 (MiCheckCommitReleaseFromVad.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140218A3C (MmRemoveSystemCacheFromDump.c)
 *     MiComparePteProtections @ 0x14021A188 (MiComparePteProtections.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x14021C5B4 (MiGetSharedProtosAtDpcLevel.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiTransientCombineAddress @ 0x14022C8AC (MiTransientCombineAddress.c)
 *     PopPepGetComponentVetoMasks @ 0x14023B47C (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14023B56C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetDeviceVetoMasks @ 0x14023B684 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14023B754 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14023B858 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14023BFE0 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14023C334 (PopPepRegisterComponentPerfStates.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402467D0 (DbgpRemoveDebugPrintCallback.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025004C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14025B304 (ViIrpDatabaseAcquireLockShared.c)
 *     VmAccessFault @ 0x14025B4F8 (VmAccessFault.c)
 *     ExpCheckForResource @ 0x140263DEC (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x140273A9C (RtlpSparseBitmapCtxLockShared.c)
 *     ExQuerySystemLockInformation @ 0x140404220 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionLock @ 0x140750C40 (ViDeadlockDetectionLock.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx
  signed __int32 v3; // eax

  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = *a1;
      if ( *(int *)a1 >= 0 )
        break;
      if ( (v3 & 0x40000000) == 0 )
        _InterlockedCompareExchange(a1, v3 | 0x40000000, v3);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
  }
  while ( v3 != _InterlockedCompareExchange(a1, (v3 + 1) & 0xBFFFFFFF, v3) );
  return v2;
}
