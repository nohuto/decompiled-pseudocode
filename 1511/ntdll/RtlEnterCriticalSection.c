/*
 * XREFs of RtlEnterCriticalSection @ 0x18002E900
 * Callers:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrpWorkCallback @ 0x180009200 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpDynamicShimModule @ 0x18000A5AC (LdrpDynamicShimModule.c)
 *     LdrpSendDllNotifications @ 0x18000F690 (LdrpSendDllNotifications.c)
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x180023AD4 (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlLockHeap @ 0x18002E860 (RtlLockHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x18002EB50 (RtlQueryEnvironmentVariable.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002F12C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180030438 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpGetLoadAsEntry @ 0x18003D390 (LdrpGetLoadAsEntry.c)
 *     RtlpSetProcMergedLangList @ 0x18003F1A4 (RtlpSetProcMergedLangList.c)
 *     EtwpAllocateFreeBuffers @ 0x1800454F8 (EtwpAllocateFreeBuffers.c)
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     EtwpSwitchBuffer @ 0x18004B028 (EtwpSwitchBuffer.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18004C1F0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18004D8B0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004DC40 (RtlSetEnvironmentVar.c)
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     RtlCreateTagHeap @ 0x18004EF00 (RtlCreateTagHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18004F2A0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpEnumProcessHeaps @ 0x180051130 (RtlpEnumProcessHeaps.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180053028 (RtlpActivateLowFragmentationHeap.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180055FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     EtwpFlushActiveBuffers @ 0x18005BE98 (EtwpFlushActiveBuffers.c)
 *     RtlSleepConditionVariableCS @ 0x180067A90 (RtlSleepConditionVariableCS.c)
 *     RtlpComputePath @ 0x180072FAC (RtlpComputePath.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     LdrpQueueWork @ 0x1800767BC (LdrpQueueWork.c)
 *     LdrAddLoadAsDataTable @ 0x180076850 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetCurrentDirectory_U @ 0x180077BE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x180077EEC (RtlpReferenceCurrentDirectory.c)
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007AE28 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlAcquirePebLock @ 0x18007B090 (RtlAcquirePebLock.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     RtlSetEnvironmentStrings @ 0x180081BC0 (RtlSetEnvironmentStrings.c)
 *     AVrfDllLoadNotification @ 0x1800836E8 (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180084640 (LdrRegisterDllNotification.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180084820 (RtlSetProcessPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180084C2C (RtlUpdateProcessRegistryInfo.c)
 *     RtlSetCurrentEnvironment @ 0x180084E90 (RtlSetCurrentEnvironment.c)
 *     RtlpSetupExtendedBlock @ 0x1800863B0 (RtlpSetupExtendedBlock.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     RtlCompactHeap @ 0x18008DFD0 (RtlCompactHeap.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x180094380 (RtlQueryProcessHeapInformation.c)
 *     LdrUnregisterDllNotification @ 0x1800C9830 (LdrUnregisterDllNotification.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 *     AVrfDllUnloadNotification @ 0x1800CDEF8 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800CE3D0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800D22F4 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800D26A8 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800D273C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800D2874 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800DC6C0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800E01FC (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1800EA4A0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800EA6D0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800EA7B0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1800EA830 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1800EA880 (RtlTraceDatabaseValidate.c)
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800EF428 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800EFAE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800EFE54 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800F0070 (RtlDebugZeroHeap.c)
 *     EtwpBufferingModeFlush @ 0x1800F3EE4 (EtwpBufferingModeFlush.c)
 *     _ResFindClose @ 0x1800F98D4 (_ResFindClose.c)
 *     _ResFindNextFileW @ 0x1800F9D78 (_ResFindNextFileW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended();
  }
  return result;
}
