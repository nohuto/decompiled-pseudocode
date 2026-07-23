/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x18002A460
 * Callers:
 *     EtwpTrackProviderBinary @ 0x180001410 (EtwpTrackProviderBinary.c)
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800077B0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180009118 (RtlpHpLfhBucketAddSubsegment.c)
 *     EtwProcessPrivateLoggerRequest @ 0x18000A160 (EtwProcessPrivateLoggerRequest.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18000A9E4 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000AB30 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18000ADB4 (RtlpCreateSerializationGroup.c)
 *     TppDirectExecuteCallback @ 0x18000AF10 (TppDirectExecuteCallback.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 *     TppWaitCompletion @ 0x18000B250 (TppWaitCompletion.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpTpWaitCheckReset @ 0x18000BE10 (RtlpTpWaitCheckReset.c)
 *     EtwpDisableTraceProviders @ 0x18000BE90 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x18000C140 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18000C2FC (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18000C3E8 (EtwpFindRegistration.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18000C550 (RtlpDecrementWnfSerializationGroup.c)
 *     EtwNotificationUnregister @ 0x18000E370 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18000E484 (EtwpRemoveRegistrationFromTable.c)
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180020924 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x18002097C (LdrpBuildForwarderLink.c)
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpVsChunkDecommit @ 0x1800277E4 (RtlpHpVsChunkDecommit.c)
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     RtlpHpVsChunkSplit @ 0x180028560 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextAllocate @ 0x180028D80 (RtlpHpVsContextAllocate.c)
 *     RtlpHpHeapLock @ 0x18002A3CC (RtlpHpHeapLock.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180030B30 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     AlpcGetMessageFromCompletionList @ 0x180034F40 (AlpcGetMessageFromCompletionList.c)
 *     RtlReleasePath @ 0x180035A90 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     RtlpHpSegPageRangeShrink @ 0x180036344 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpGetCachedPath @ 0x180036C64 (RtlpGetCachedPath.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180036DB0 (RtlpHpVsSubsegmentCommitPages.c)
 *     LdrpDecrementModuleLoadCount @ 0x1800384B0 (LdrpDecrementModuleLoadCount.c)
 *     EtwNotificationRegister @ 0x180038BC0 (EtwNotificationRegister.c)
 *     EtwpInsertRegistration @ 0x180038DB8 (EtwpInsertRegistration.c)
 *     RtlpHpSegLockAcquire @ 0x1800392FC (RtlpHpSegLockAcquire.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x18003B540 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18003D288 (TppSetTimer.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003DF0C (TppCleanupGroupMemberInitialize.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     TppSingleTimerExpiration @ 0x18003EA58 (TppSingleTimerExpiration.c)
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180041A50 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpComputeLazyDllPath @ 0x180042FC0 (LdrpComputeLazyDllPath.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180043500 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpCondenseGraphRecurse @ 0x180044028 (LdrpCondenseGraphRecurse.c)
 *     RtlProcessFlsData @ 0x180044AA0 (RtlProcessFlsData.c)
 *     LdrpReleaseTlsEntry @ 0x1800451C8 (LdrpReleaseTlsEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     RtlpLockAtomTable @ 0x180052564 (RtlpLockAtomTable.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x180055344 (RtlpSparseBitmapCtxLockExclusive.c)
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     RtlFlsAlloc @ 0x180056010 (RtlFlsAlloc.c)
 *     LdrpQueueDeferredTlsData @ 0x1800565E4 (LdrpQueueDeferredTlsData.c)
 *     RtlFlsFree @ 0x180056650 (RtlFlsFree.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpHpLargeLockAcquire @ 0x180058924 (RtlpHpLargeLockAcquire.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x180059CC0 (RtlSetSearchPathMode.c)
 *     RtlpGetNormalization @ 0x18005F18C (RtlpGetNormalization.c)
 *     RtlpCallVectoredHandlers @ 0x18005F7F4 (RtlpCallVectoredHandlers.c)
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180063784 (TppPoolUpdateTrimmedWorker.c)
 *     TpTrimPools @ 0x180065B80 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180066C84 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlpAddVectoredHandler @ 0x1800670E0 (RtlpAddVectoredHandler.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800699E4 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpFindLoadedDllByAddress @ 0x180069F00 (LdrpFindLoadedDllByAddress.c)
 *     LdrpCleanupThreadTlsData @ 0x18006B65C (LdrpCleanupThreadTlsData.c)
 *     LdrpFindLoadedDllByMapping @ 0x18006C1E0 (LdrpFindLoadedDllByMapping.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18006C540 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegLfhExtendContext @ 0x18006C810 (RtlpHpSegLfhExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18006C900 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
 *     TppCleanupGroupRemoveMember @ 0x18006E2F0 (TppCleanupGroupRemoveMember.c)
 *     TppPoolAddWorker @ 0x180070374 (TppPoolAddWorker.c)
 *     RtlDeleteFunctionTable @ 0x180070600 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180070AD0 (RtlDeleteGrowableFunctionTable.c)
 *     TppPoolRemoveWorker @ 0x180072180 (TppPoolRemoveWorker.c)
 *     LdrGetDllDirectory @ 0x180072480 (LdrGetDllDirectory.c)
 *     RtlAddFunctionTable @ 0x180072810 (RtlAddFunctionTable.c)
 *     LdrpInsertModuleToIndex @ 0x1800731A4 (LdrpInsertModuleToIndex.c)
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 *     TppPoolpFree @ 0x180074128 (TppPoolpFree.c)
 *     RtlInstallFunctionTableCallback @ 0x180074270 (RtlInstallFunctionTableCallback.c)
 *     RtlLockMemoryBlockLookaside @ 0x180075300 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180075370 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18007541C (RtlpRegisterLockedMemoryZone.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800754B0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180075510 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800755A0 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800755E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180075670 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockModuleSection @ 0x1800756D0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 *     RtlpRemoveVectoredHandler @ 0x180075D10 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x1800770E4 (RtlpInitializeStaticCriticalSection.c)
 *     TpDisablePoolCallbackChecks @ 0x180078710 (TpDisablePoolCallbackChecks.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180078C90 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180078CF0 (RtlDestroyMemoryZone.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007A460 (TpSetDefaultPoolStackInformation.c)
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x18007ACF0 (RtlUpdateTimer.c)
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 *     RtlRegisterWait @ 0x18007BDC0 (RtlRegisterWait.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18007C830 (RtlCreateTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x18007CBD0 (TpTimerOutstandingCallbackCount.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 *     TpReleaseWait @ 0x18007D2D0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18007D3E0 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x18007D430 (TpWaitForWait.c)
 *     TpWaitForTimer @ 0x18007D560 (TpWaitForTimer.c)
 *     TppCleanupGroupAddMember @ 0x18007D9B4 (TppCleanupGroupAddMember.c)
 *     TpReleaseCleanupGroupMembers @ 0x18007DA80 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppTimerpStopCallbackGeneration @ 0x18007DF70 (TppTimerpStopCallbackGeneration.c)
 *     TppStopWaitCallbackGeneration @ 0x18007DFD0 (TppStopWaitCallbackGeneration.c)
 *     RtlSetIoCompletionCallback @ 0x18007E530 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x18007E680 (RtlpTpIoLookup.c)
 *     RtlpTpIoDllLoaded @ 0x18007ED38 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x18007EDEC (RtlpTpIoDllUnloaded.c)
 *     TppQueueRemoveHead @ 0x18007F0C0 (TppQueueRemoveHead.c)
 *     LdrFlushAlternateResourceModules @ 0x1800807B0 (LdrFlushAlternateResourceModules.c)
 *     LdrQueryModuleServiceTags @ 0x1800BC630 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800BCDF4 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrForkMrdata @ 0x1800C143C (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 *     RtlpLockFlsCallbackVector @ 0x1800C2B08 (RtlpLockFlsCallbackVector.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800C90F0 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800C9754 (RtlpSignalSystemDirsModification.c)
 *     RtlGrowFunctionTable @ 0x1800CAE40 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800D1E10 (RtlResetMemoryBlockLookaside.c)
 *     RtlExtendMemoryZone @ 0x1800D1E70 (RtlExtendMemoryZone.c)
 *     RtlResetMemoryZone @ 0x1800D1F70 (RtlResetMemoryZone.c)
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800DE800 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800DE930 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800DE9E0 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800E1304 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800E1D60 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800E1E38 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800E1F24 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800E206C (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLockAcquire @ 0x1800E4F68 (RtlpStdLockAcquire.c)
 *     RtlSetProtectedPolicy @ 0x1800E5290 (RtlSetProtectedPolicy.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlpHpVirtLargeTreeFind @ 0x1800EB55C (RtlpHpVirtLargeTreeFind.c)
 *     RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644 (RtlpHpVirtLargeTreeInsertNode.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800F086C (RtlpIsLFHZoneAllocation.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800F30E4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F3158 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x1800F3474 (RtlpHpLfhSubsegmentLockOwner.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5680 (TpSetDefaultPoolMaxThreads.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5774 (TppAdjustRunningThreadGoal.c)
 *     TppDirectUnposted @ 0x1800F5840 (TppDirectUnposted.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x1800360D0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  PRTL_SRWLOCK v4; // rdi
  unsigned __int64 Value; // rbx
  bool v6; // zf
  signed __int64 v7; // rax
  int i; // eax
  unsigned __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  PRTL_SRWLOCK v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  unsigned int v15[5]; // [rsp+44h] [rbp-14h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = SRWLock;
  v16 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(SRWLock, v1, v2, v3, v10) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        SRWLock = (PRTL_SRWLOCK)NtCurrentTeb()->ClientId.UniqueThread;
        v13 = SRWLock;
        LOBYTE(SRWLock) = 0;
        v15[0] = 3;
        v12 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v11 = 0LL;
          v14 = -1;
          v10 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (char *)((unsigned __int64)&v10 | Value & 8 | 7);
          LOBYTE(SRWLock) = (Value & 4) == 0;
        }
        else
        {
          v11 = &v10;
          v14 = Value >> 4;
          if ( v14 > 1 )
            v1 = (char *)((unsigned __int64)&v10 | 0xB);
          else
            v1 = (char *)&v10 + 3;
          if ( !(unsigned int)(Value >> 4) )
            v14 = -2;
        }
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, (signed __int64)v1, Value);
        v6 = Value == v7;
        Value = v7;
        if ( !v6 )
          goto LABEL_13;
        if ( (_BYTE)SRWLock )
          RtlpOptimizeSRWLockList(v4);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( i = SRWLockSpinCount; i; --i )
          {
            SRWLock = (PRTL_SRWLOCK)v15[0];
            if ( (v15[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v15, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v4, 0LL);
          while ( (v15[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v4, Value + 1, Value) )
          return;
LABEL_13:
        RtlBackoff(&v16);
        _m_prefetchw(v4);
        Value = v4->Value;
      }
    }
  }
}
