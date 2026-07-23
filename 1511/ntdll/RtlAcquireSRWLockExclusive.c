/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x18002DA60
 * Callers:
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     RtlLockMemoryBlockLookaside @ 0x180001C70 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180001CE0 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180001D8C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001E1C (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180001EB0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180001F10 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180001FA0 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001FE0 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockModuleSection @ 0x180002040 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180002140 (RtlUnlockModuleSection.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180003280 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x1800032E0 (RtlDestroyMemoryZone.c)
 *     TppStopWaitCallbackGeneration @ 0x180003F20 (TppStopWaitCallbackGeneration.c)
 *     TpReleaseCleanupGroupMembers @ 0x180003FB0 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppTimerpStopCallbackGeneration @ 0x1800044A0 (TppTimerpStopCallbackGeneration.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180004870 (RtlpRemoveUserSubFromNameSub.c)
 *     TpWaitForWait @ 0x180004C20 (TpWaitForWait.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000533C (RtlpDecRefWnfNameSubscription.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpTpWaitCheckReset @ 0x180005ED8 (RtlpTpWaitCheckReset.c)
 *     TpAllocPoolInternal @ 0x1800061E0 (TpAllocPoolInternal.c)
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 *     TpWaitOutstandingCallbackCount @ 0x180006F44 (TpWaitOutstandingCallbackCount.c)
 *     RtlRegisterWait @ 0x180007100 (RtlRegisterWait.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180007370 (RtlpWnfProcessCurrentDescriptor.c)
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     TpReleaseWait @ 0x1800078A0 (TpReleaseWait.c)
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800080F0 (TpTimerOutstandingCallbackCount.c)
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     RtlCreateTimer @ 0x1800081A0 (RtlCreateTimer.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000840C (RtlpWnfWalkUserSubscriptionList.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 *     TppCleanupGroupRemoveMember @ 0x180009180 (TppCleanupGroupRemoveMember.c)
 *     TppWaitCompletion @ 0x1800097A0 (TppWaitCompletion.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     TpReleaseTimer @ 0x18000A4C0 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18000A720 (TpWaitForTimer.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 *     TppTimerQueueExpiration @ 0x18000AC60 (TppTimerQueueExpiration.c)
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18000B34C (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpProcessMappedModule @ 0x1800102F0 (LdrpProcessMappedModule.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x1800117F0 (LdrpBuildForwarderLink.c)
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180021080 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180027AC0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpVsChunkSplit @ 0x18002A520 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextAllocate @ 0x18002B090 (RtlpHpVsContextAllocate.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x18002CF40 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     RtlpHpHeapLock @ 0x18002D9C4 (RtlpHpHeapLock.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18002E064 (RtlpHpLfhSubsegmentLockOwner.c)
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     AlpcGetMessageFromCompletionList @ 0x18002F280 (AlpcGetMessageFromCompletionList.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlReleasePath @ 0x18002F730 (RtlReleasePath.c)
 *     RtlpGetCachedPath @ 0x18002FB34 (RtlpGetCachedPath.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18002FC60 (RtlpHpVsSubsegmentCommitPages.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpFindLoadedDllByAddress @ 0x18003F040 (LdrpFindLoadedDllByAddress.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x180040378 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlFlsFree @ 0x1800403A0 (RtlFlsFree.c)
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     RtlFlsAlloc @ 0x180041220 (RtlFlsAlloc.c)
 *     LdrpQueueDeferredTlsData @ 0x180041B14 (LdrpQueueDeferredTlsData.c)
 *     RtlpLockAtomTable @ 0x180044034 (RtlpLockAtomTable.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180044A70 (EtwProcessPrivateLoggerRequest.c)
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180047F64 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18004E8C0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpTagFree @ 0x180050324 (RtlpHpTagFree.c)
 *     RtlpHpVsContextFree @ 0x180050AE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkDecommit @ 0x180050CDC (RtlpHpVsChunkDecommit.c)
 *     EtwpDisableTraceProviders @ 0x1800514A4 (EtwpDisableTraceProviders.c)
 *     RtlpCreateSerializationGroup @ 0x180051C38 (RtlpCreateSerializationGroup.c)
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180052AFC (EtwpGetNextRegistration.c)
 *     RtlpHpSegLfhExtendContext @ 0x1800535C0 (RtlpHpSegLfhExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800536B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180053924 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x180053A70 (RtlpCreateWnfNameSubscription.c)
 *     EtwpFindRegistration @ 0x1800540F8 (EtwpFindRegistration.c)
 *     EtwNotificationRegister @ 0x1800541F0 (EtwNotificationRegister.c)
 *     EtwpInsertRegistration @ 0x180054648 (EtwpInsertRegistration.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegLockAcquire @ 0x180059098 (RtlpHpSegLockAcquire.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     RtlpHpTagContextAllocateTag @ 0x180059F30 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeLockAcquire @ 0x18005A834 (RtlpHpLargeLockAcquire.c)
 *     RtlProcessFlsData @ 0x18005B3E0 (RtlProcessFlsData.c)
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180068308 (TppPoolUpdateTrimmedWorker.c)
 *     RtlpGetNormalization @ 0x18006B6AC (RtlpGetNormalization.c)
 *     RtlpCallVectoredHandlers @ 0x18006E65C (RtlpCallVectoredHandlers.c)
 *     RtlAddGrowableFunctionTable @ 0x1800712C0 (RtlAddGrowableFunctionTable.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180072458 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlpAddVectoredHandler @ 0x1800729B0 (RtlpAddVectoredHandler.c)
 *     LdrpCondenseGraphRecurse @ 0x180074B30 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18007522C (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpCleanupThreadTlsData @ 0x180076524 (LdrpCleanupThreadTlsData.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076CC0 (LdrpFindLoadedDllByMapping.c)
 *     TppCleanupGroupAddMember @ 0x180077A64 (TppCleanupGroupAddMember.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007881C (RtlRemoveInvertedFunctionTable.c)
 *     TppPoolAddWorker @ 0x18007B0D4 (TppPoolAddWorker.c)
 *     LdrpComputeLazyDllPath @ 0x18007B364 (LdrpComputeLazyDllPath.c)
 *     RtlDeleteFunctionTable @ 0x18007B4F0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 *     TppPoolRemoveWorker @ 0x18007D534 (TppPoolRemoveWorker.c)
 *     LdrGetDllDirectory @ 0x18007E0F0 (LdrGetDllDirectory.c)
 *     RtlAddFunctionTable @ 0x18007E2A0 (RtlAddFunctionTable.c)
 *     LdrpInsertModuleToIndex @ 0x18007EDC4 (LdrpInsertModuleToIndex.c)
 *     EtwpTrackProviderBinary @ 0x18007EE08 (EtwpTrackProviderBinary.c)
 *     TppDirectExecuteCallback @ 0x18007F240 (TppDirectExecuteCallback.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 *     LdrpReleaseTlsEntry @ 0x18007F9B0 (LdrpReleaseTlsEntry.c)
 *     RtlInstallFunctionTableCallback @ 0x18007FA60 (RtlInstallFunctionTableCallback.c)
 *     TpSetDefaultPoolStackInformation @ 0x180081320 (TpSetDefaultPoolStackInformation.c)
 *     TppJobpRundownJob @ 0x18008156C (TppJobpRundownJob.c)
 *     RtlUpdateTimer @ 0x180081910 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 *     RtlpRemoveVectoredHandler @ 0x1800822F0 (RtlpRemoveVectoredHandler.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800825A0 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180082968 (RtlpInitializeStaticCriticalSection.c)
 *     TpDisablePoolCallbackChecks @ 0x180084390 (TpDisablePoolCallbackChecks.c)
 *     RtlSetSearchPathMode @ 0x1800844C0 (RtlSetSearchPathMode.c)
 *     RtlpHeapTrkTrackAdd @ 0x180084F84 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackStack @ 0x18008505C (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008523C (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x180085324 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpIsLFHZoneAllocation @ 0x18008654C (RtlpIsLFHZoneAllocation.c)
 *     LdrFlushAlternateResourceModules @ 0x180088AE0 (LdrFlushAlternateResourceModules.c)
 *     TppQueueRemoveHead @ 0x18008A524 (TppQueueRemoveHead.c)
 *     RtlpTpIoDllLoaded @ 0x18008D098 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x18008D14C (RtlpTpIoDllUnloaded.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     RtlSetIoCompletionCallback @ 0x18008DA90 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x18008DBE0 (RtlpTpIoLookup.c)
 *     LdrQueryModuleServiceTags @ 0x1800C9350 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800C9B14 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrForkMrdata @ 0x1800CBAFC (LdrForkMrdata.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 *     RtlpLockFlsCallbackVector @ 0x1800CC508 (RtlpLockFlsCallbackVector.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D19B0 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800D1BD0 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800D2234 (RtlpSignalSystemDirsModification.c)
 *     RtlGrowFunctionTable @ 0x1800D3830 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800DA330 (RtlResetMemoryBlockLookaside.c)
 *     RtlExtendMemoryZone @ 0x1800DA390 (RtlExtendMemoryZone.c)
 *     RtlResetMemoryZone @ 0x1800DA490 (RtlResetMemoryZone.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800E3F50 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800E4080 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800E4130 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800E71A0 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpStdLockAcquire @ 0x1800E9AC8 (RtlpStdLockAcquire.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800F35E4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F3658 (RtlpHpLfhOwnerLockUnlock.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5080 (TpSetDefaultPoolMaxThreads.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5174 (TppAdjustRunningThreadGoal.c)
 *     TppDirectUnposted @ 0x1800F5240 (TppDirectUnposted.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18002F6E0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x180068D00 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075544 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A8770 (NtWaitForAlertByThreadId.c)
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
  unsigned __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  PRTL_SRWLOCK v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  signed __int32 v14[5]; // [rsp+44h] [rbp-14h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = SRWLock;
  v15 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(SRWLock, v1, v2, v3, v9) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        SRWLock = (PRTL_SRWLOCK)NtCurrentTeb()->ClientId.UniqueThread;
        v12 = SRWLock;
        LOBYTE(SRWLock) = 0;
        v14[0] = 3;
        v11 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v10 = 0LL;
          v13 = -1;
          v9 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (char *)((unsigned __int64)&v9 | Value & 8 | 7);
          LOBYTE(SRWLock) = (Value & 4) == 0;
        }
        else
        {
          v10 = &v9;
          v13 = Value >> 4;
          if ( v13 > 1 )
            v1 = (char *)((unsigned __int64)&v9 | 0xB);
          else
            v1 = (char *)&v9 + 3;
          if ( !(unsigned int)(Value >> 4) )
            v13 = -2;
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
          SRWLock = (PRTL_SRWLOCK)(unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v14[0] & 2) == 0 )
                break;
              _mm_pause();
              v6 = (_DWORD)SRWLock == 1;
              SRWLock = (PRTL_SRWLOCK)(unsigned int)((_DWORD)SRWLock - 1);
            }
            while ( !v6 );
          }
        }
        if ( _interlockedbittestandreset(v14, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v4, 0LL);
          while ( (v14[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v4, Value + 1, Value) )
          return;
LABEL_13:
        RtlBackoff(&v15);
        _m_prefetchw(v4);
        Value = v4->Value;
      }
    }
  }
}
