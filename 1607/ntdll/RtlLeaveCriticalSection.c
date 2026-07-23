/*
 * XREFs of RtlLeaveCriticalSection @ 0x180019DB0
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     RtlpComputePath @ 0x18000CD74 (RtlpComputePath.c)
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrpWorkCallback @ 0x18000E100 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012948 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     RtlQueryEnvironmentVariable @ 0x1800196C0 (RtlQueryEnvironmentVariable.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180019964 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlUnlockHeap @ 0x180019E40 (RtlUnlockHeap.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180029A3C (RtlpActivateLowFragmentationHeap.c)
 *     LdrpGetLoadAsEntry @ 0x18002CAA8 (LdrpGetLoadAsEntry.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CDF0 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18002D150 (LdrAddLoadAsDataTable.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpDynamicShimModule @ 0x18002D724 (LdrpDynamicShimModule.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002D944 (RtlpMoveHeapBetweenLists.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002E648 (LdrpSendDllNotifications.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800302A4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpQueueWork @ 0x18003C7E0 (LdrpQueueWork.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4BC (RtlpEnumProcessHeaps.c)
 *     RtlpFlushHeap @ 0x18004E5C8 (RtlpFlushHeap.c)
 *     EtwpFlushActiveBuffers @ 0x180052C60 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x180054798 (EtwpAllocateFreeBuffers.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     EtwpSwitchBuffer @ 0x18005CE88 (EtwpSwitchBuffer.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18005DBF0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlCreateProcessParametersEx @ 0x18005E8F0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF10 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2A0 (RtlSetEnvironmentVar.c)
 *     RtlSleepConditionVariableCS @ 0x180062AE0 (RtlSleepConditionVariableCS.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706B4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlCreateTagHeap @ 0x180075D80 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     RtlSetCurrentDirectory_U @ 0x180079050 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800791AC (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180079270 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007935C (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     RtlReleasePebLock @ 0x18007E540 (RtlReleasePebLock.c)
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E7B8 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180080584 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetProcMergedLangList @ 0x1800847BC (RtlpSetProcMergedLangList.c)
 *     RtlSetEnvironmentStrings @ 0x180085F30 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x1800879A0 (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x1800884C0 (LdrRegisterDllNotification.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A10 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x180088EE0 (RtlSetCurrentEnvironment.c)
 *     RtlpSetupExtendedBlock @ 0x18008F280 (RtlpSetupExtendedBlock.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F840 (RtlSetHeapDebuggingInformation.c)
 *     RtlCompactHeap @ 0x1800909F0 (RtlCompactHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B40 (RtlQueryProcessHeapInformation.c)
 *     LdrUnregisterDllNotification @ 0x1800D0CB0 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2BE4 (LdrpCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D4090 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 *     AVrfDllUnloadNotification @ 0x1800D5F64 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800D63F0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DA778 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DA9B8 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DAA4C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DAB84 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800E59B0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x1800E9310 (RtlQueryTagHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA764 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAD28 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1800F3210 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800F3440 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800F3520 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1800F35D0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1800F35F0 (RtlTraceDatabaseValidate.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800FA590 (RtlDebugCreateTagHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800FA938 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FB554 (RtlDebugZeroHeap.c)
 *     EtwpBufferingModeFlush @ 0x1800FD694 (EtwpBufferingModeFlush.c)
 *     _ResFindClose @ 0x1801041AC (_ResFindClose.c)
 *     _ResFindNextFileW @ 0x180104664 (_ResFindNextFileW.c)
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D18 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3BC0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3D78 (RtlpUnWaitCriticalSectionEx.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  bool v1; // zf
  signed __int32 v3; // edi
  void *LockSemaphore; // r8
  int v5; // edx
  signed __int32 v6; // eax

  v1 = CriticalSection->RecursionCount-- == 1;
  if ( v1 )
  {
    CriticalSection->OwningThread = 0LL;
    v3 = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
    if ( v3 != -2 )
    {
      if ( (CriticalSection->LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(CriticalSection);
      LockSemaphore = CriticalSection->LockSemaphore;
      if ( !LockSemaphore )
        LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(CriticalSection);
      do
      {
        v5 = v3 & 2 | 1;
        v6 = _InterlockedCompareExchange(&CriticalSection->LockCount, v5 + v3, v3);
        v1 = v3 == v6;
        v3 = v6;
      }
      while ( !v1 );
      if ( (v5 & 2) != 0 )
        RtlpUnWaitCriticalSectionEx(CriticalSection, LockSemaphore);
    }
  }
  return 0;
}
