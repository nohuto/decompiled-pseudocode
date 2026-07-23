/*
 * XREFs of RtlLeaveCriticalSection @ 0x180034710
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180004B5C (RtlpActivateLowFragmentationHeap.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpEnumProcessHeaps @ 0x180008524 (RtlpEnumProcessHeaps.c)
 *     RtlpFlushHeap @ 0x180008638 (RtlpFlushHeap.c)
 *     EtwpFlushActiveBuffers @ 0x180009858 (EtwpFlushActiveBuffers.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     EtwpSwitchBuffer @ 0x180011254 (EtwpSwitchBuffer.c)
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180026020 (RtlGetFullPathName_Ustr.c)
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlUnlockHeap @ 0x180033370 (RtlUnlockHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180035070 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x1800353E0 (RtlQueryEnvironmentVariable.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800381AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlReleasePebLock @ 0x1800382A0 (RtlReleasePebLock.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     LdrpQueueWork @ 0x1800390B0 (LdrpQueueWork.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     LdrpWorkCallback @ 0x18003BF00 (LdrpWorkCallback.c)
 *     LdrpDynamicShimModule @ 0x1800415EC (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x1800419B0 (LdrpSendDllNotifications.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 *     RtlpUnlockHeapInternal @ 0x180044C7C (RtlpUnlockHeapInternal.c)
 *     RtlCreateProcessParametersEx @ 0x1800461E0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x180046800 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180046B90 (RtlSetEnvironmentVar.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800476E4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180064638 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSleepConditionVariableCS @ 0x1800660D0 (RtlSleepConditionVariableCS.c)
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     LdrpGetLoadAsEntry @ 0x180069DE0 (LdrpGetLoadAsEntry.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18006AB38 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006AFD0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrAddLoadAsDataTable @ 0x18006B290 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18006F860 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlGetCurrentDirectory_U @ 0x18006FA50 (RtlGetCurrentDirectory_U.c)
 *     RtlSetCurrentDirectory_U @ 0x18006FB70 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18006FCD0 (RtlpCheckForSameCurdir.c)
 *     RtlpSetProcMergedLangList @ 0x18007458C (RtlpSetProcMergedLangList.c)
 *     RtlSetEnvironmentStrings @ 0x180075230 (RtlSetEnvironmentStrings.c)
 *     EtwpAllocateFreeBuffers @ 0x180076848 (EtwpAllocateFreeBuffers.c)
 *     AVrfDllLoadNotification @ 0x180078210 (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180078950 (LdrRegisterDllNotification.c)
 *     RtlSetCurrentEnvironment @ 0x180078BC0 (RtlSetCurrentEnvironment.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrUnregisterDllNotification @ 0x1800BCB10 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800C0D1C (LdrpCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessHeapInformation @ 0x1800C36B0 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800C4BC8 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800C50A0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800C9814 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800C9BC8 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800C9C5C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800C9D94 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800D47A0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x1800D8360 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800D852C (RtlSetHeapDebuggingInformation.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800D9644 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800DA9EC (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800DD648 (RtlpSetupExtendedBlock.c)
 *     RtlTraceDatabaseAdd @ 0x1800E59C0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800E5BF0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800E5CD0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1800E5D80 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1800E5DA0 (RtlTraceDatabaseValidate.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EC5E0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800ECC9C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800ED52C (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800ED8E4 (RtlDebugZeroHeap.c)
 *     EtwpBufferingModeFlush @ 0x1800F4044 (EtwpBufferingModeFlush.c)
 *     _ResFindClose @ 0x1800F9FBC (_ResFindClose.c)
 *     _ResFindNextFileW @ 0x1800FA460 (_ResFindNextFileW.c)
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180073144 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800C2120 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800C22F4 (RtlpUnWaitCriticalSectionEx.c)
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
