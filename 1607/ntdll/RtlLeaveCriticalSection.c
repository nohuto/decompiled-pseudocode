/*
 * XREFs of RtlLeaveCriticalSection @ 0x180019DC0
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     RtlpComputePath @ 0x18000CD84 (RtlpComputePath.c)
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     LdrpWorkCallback @ 0x18000E110 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012958 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     RtlQueryEnvironmentVariable @ 0x1800196D0 (RtlQueryEnvironmentVariable.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180019974 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlUnlockHeap @ 0x180019E50 (RtlUnlockHeap.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x180029050 (RtlSetUserValueHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 *     LdrpGetLoadAsEntry @ 0x18002CAB8 (LdrpGetLoadAsEntry.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18002D160 (LdrAddLoadAsDataTable.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     LdrpDynamicShimModule @ 0x18002D734 (LdrpDynamicShimModule.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002D954 (RtlpMoveHeapBetweenLists.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4EC (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002E658 (LdrpSendDllNotifications.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800302B4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpQueueWork @ 0x18003C7F0 (LdrpQueueWork.c)
 *     RtlpFreeUserBlock @ 0x180045F48 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4CC (RtlpEnumProcessHeaps.c)
 *     RtlpFlushHeap @ 0x18004E5D8 (RtlpFlushHeap.c)
 *     EtwpFlushActiveBuffers @ 0x180052C70 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x1800547A8 (EtwpAllocateFreeBuffers.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 *     EtwpSwitchBuffer @ 0x18005CE98 (EtwpSwitchBuffer.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18005DC00 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlCreateProcessParametersEx @ 0x18005E900 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF20 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2B0 (RtlSetEnvironmentVar.c)
 *     RtlSleepConditionVariableCS @ 0x180062AF0 (RtlSleepConditionVariableCS.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706C4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlCreateTagHeap @ 0x180075D90 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x180076860 (RtlValidateHeap.c)
 *     RtlSetCurrentDirectory_U @ 0x180079060 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800791BC (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180079280 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007936C (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     RtlGetUserInfoHeap @ 0x18007AB50 (RtlGetUserInfoHeap.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     RtlReleasePebLock @ 0x18007E550 (RtlReleasePebLock.c)
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E7C8 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180080594 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetProcMergedLangList @ 0x1800847CC (RtlpSetProcMergedLangList.c)
 *     RtlSetEnvironmentStrings @ 0x180085F40 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x1800879B0 (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x1800884D0 (LdrRegisterDllNotification.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A20 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x180088EF0 (RtlSetCurrentEnvironment.c)
 *     RtlpSetupExtendedBlock @ 0x18008F290 (RtlpSetupExtendedBlock.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F850 (RtlSetHeapDebuggingInformation.c)
 *     RtlCompactHeap @ 0x180090A00 (RtlCompactHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917D4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B60 (RtlDebugFreeHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B50 (RtlQueryProcessHeapInformation.c)
 *     LdrUnregisterDllNotification @ 0x1800D0BF0 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2B24 (LdrpCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D3FD0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 *     AVrfDllUnloadNotification @ 0x1800D5EA4 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800D6330 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DA6B8 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DA8F8 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DA98C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DAAC4 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800E58F0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x1800E9250 (RtlQueryTagHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E9420 (RtlSetUserFlagsHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAC68 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x1800EBC50 (RtlZeroHeap.c)
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
 *     _ResFindClose @ 0x18010426C (_ResFindClose.c)
 *     _ResFindNextFileW @ 0x180104724 (_ResFindNextFileW.c)
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D28 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3B00 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3CB8 (RtlpUnWaitCriticalSectionEx.c)
 */

__int64 __fastcall RtlLeaveCriticalSection(__int64 a1)
{
  bool v1; // zf
  signed __int32 v3; // edi
  __int64 DeferredCriticalSectionEvent; // r8
  int v5; // edx
  signed __int32 v6; // eax

  v1 = (*(_DWORD *)(a1 + 12))-- == 1;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), -1, -2);
    if ( v3 != -2 )
    {
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        RtlpNotOwnerCriticalSection(a1);
      DeferredCriticalSectionEvent = *(_QWORD *)(a1 + 24);
      if ( !DeferredCriticalSectionEvent )
        DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
      do
      {
        v5 = v3 & 2 | 1;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v5 + v3, v3);
        v1 = v3 == v6;
        v3 = v6;
      }
      while ( !v1 );
      if ( (v5 & 2) != 0 )
        RtlpUnWaitCriticalSectionEx(a1, DeferredCriticalSectionEvent);
    }
  }
  return 0LL;
}
