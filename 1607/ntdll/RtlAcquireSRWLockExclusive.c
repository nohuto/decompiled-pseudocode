/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180020BE0
 * Callers:
 *     RtlpIsLFHZoneAllocation @ 0x180001200 (RtlpIsLFHZoneAllocation.c)
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800019D0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180001A40 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180001AEC (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001B7C (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180001C10 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180001C70 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180001D00 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001D40 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockModuleSection @ 0x180001DA0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800028D0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180002930 (RtlDestroyMemoryZone.c)
 *     RtlSetSearchPathMode @ 0x1800069C0 (RtlSetSearchPathMode.c)
 *     RtlProcessFlsData @ 0x180007190 (RtlProcessFlsData.c)
 *     RtlReleasePath @ 0x180009190 (RtlReleasePath.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C350 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpGetCachedPath @ 0x18000CAE0 (RtlpGetCachedPath.c)
 *     LdrpComputeLazyDllPath @ 0x18000D36C (LdrpComputeLazyDllPath.c)
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpLoadKnownDll @ 0x180012030 (LdrpLoadKnownDll.c)
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     AlpcGetMessageFromCompletionList @ 0x18001A2A0 (AlpcGetMessageFromCompletionList.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     RtlpHpVsChunkSplit @ 0x18001C590 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocate @ 0x18001D0F0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18001D3B8 (RtlpHpLfhSubsegmentLockOwner.c)
 *     TppAlpcpExecuteCallback @ 0x18001D450 (TppAlpcpExecuteCallback.c)
 *     RtlpHpHeapLock @ 0x18001E6A8 (RtlpHpHeapLock.c)
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x180020170 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180029554 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296A0 (RtlpCreateWnfNameSubscription.c)
 *     EtwpFindRegistration @ 0x18002A0D0 (EtwpFindRegistration.c)
 *     EtwNotificationRegister @ 0x18002A400 (EtwNotificationRegister.c)
 *     EtwpInsertRegistration @ 0x18002A85C (EtwpInsertRegistration.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B130 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrProtectMrdataHeap @ 0x18002D9E4 (LdrProtectMrdataHeap.c)
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002E6DC (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F008 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180030088 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C40 (LdrpFindLoadedDllByHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 *     TpReleaseTimer @ 0x18003A480 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x18003AC50 (TppWaitCompletion.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B80C (TppPoolpDereferenceGlobalPool.c)
 *     TpWaitForTimer @ 0x18003B8E0 (TpWaitForTimer.c)
 *     RtlpHpSegLockAcquire @ 0x18003BB7C (RtlpHpSegLockAcquire.c)
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 *     TpSetTimerEx @ 0x18003BFF0 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18003C378 (TppSetTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C870 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x18003CC18 (TppSingleTimerExpiration.c)
 *     TpPostTask @ 0x18003D018 (TpPostTask.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18003F8BC (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9A4 (RtlpHpLargeLockAcquire.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF40 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlFlsAlloc @ 0x180050190 (RtlFlsAlloc.c)
 *     RtlFlsFree @ 0x180050A00 (RtlFlsFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050BF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlDeleteCriticalSection @ 0x1800523A0 (RtlDeleteCriticalSection.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180053810 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpDisableTraceProviders @ 0x180053E80 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x180054000 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x1800541BC (EtwpGetNextRegistration.c)
 *     RtlpGetNormalization @ 0x180058720 (RtlpGetNormalization.c)
 *     EtwNotificationUnregister @ 0x1800596F0 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180059804 (EtwpRemoveRegistrationFromTable.c)
 *     TpTrimPools @ 0x180062610 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180062950 (RtlSleepConditionVariableSRW.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DE8 (TppPoolUpdateTrimmedWorker.c)
 *     TpReleaseCleanupGroupMembers @ 0x180063B90 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppTimerpStopCallbackGeneration @ 0x180064060 (TppTimerpStopCallbackGeneration.c)
 *     RtlDeleteTimerQueueEx @ 0x1800640C0 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x180064300 (RtlUpdateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180064420 (RtlDeregisterWaitEx.c)
 *     TpReleaseWait @ 0x180064580 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180064638 (TpWaitOutstandingCallbackCount.c)
 *     RtlDeleteTimer @ 0x180064680 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800647D0 (TpTimerOutstandingCallbackCount.c)
 *     RtlCreateTimer @ 0x180064820 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064A90 (RtlRegisterWait.c)
 *     TpWaitForWait @ 0x180064F30 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x180065070 (TppStopWaitCallbackGeneration.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AD0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D38 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065EF8 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663B8 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D78 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCallVectoredHandlers @ 0x18006700C (RtlpCallVectoredHandlers.c)
 *     RtlpLockAtomTable @ 0x18006822C (RtlpLockAtomTable.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006E8B0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlDeleteFunctionTable @ 0x18006E9C0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F120 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F450 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 *     LdrpBuildForwarderLink @ 0x180073878 (LdrpBuildForwarderLink.c)
 *     LdrpCondenseGraphRecurse @ 0x180074648 (LdrpCondenseGraphRecurse.c)
 *     RtlpAddVectoredHandler @ 0x180074B10 (RtlpAddVectoredHandler.c)
 *     RtlpCreateSerializationGroup @ 0x180074C80 (RtlpCreateSerializationGroup.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180074DA4 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpFindLoadedDllByAddress @ 0x180076070 (LdrpFindLoadedDllByAddress.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770C8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegLfhExtendContext @ 0x180077410 (RtlpHpSegLfhExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180077500 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMapping @ 0x180078550 (LdrpFindLoadedDllByMapping.c)
 *     LdrpCleanupThreadTlsData @ 0x1800796E8 (LdrpCleanupThreadTlsData.c)
 *     TppCleanupGroupAddMember @ 0x18007A214 (TppCleanupGroupAddMember.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA74 (RtlRemoveInvertedFunctionTable.c)
 *     LdrpPinModule @ 0x18007E408 (LdrpPinModule.c)
 *     TppCleanupGroupRemoveMember @ 0x18007EA7C (TppCleanupGroupRemoveMember.c)
 *     RtlpTpWaitCheckReset @ 0x18007FE78 (RtlpTpWaitCheckReset.c)
 *     TppPoolAddWorker @ 0x18007FFE0 (TppPoolAddWorker.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     TppPoolRemoveWorker @ 0x180081E58 (TppPoolRemoveWorker.c)
 *     LdrGetDllDirectory @ 0x1800820C0 (LdrGetDllDirectory.c)
 *     LdrpInsertModuleToIndex @ 0x1800828C8 (LdrpInsertModuleToIndex.c)
 *     TppDirectExecuteCallback @ 0x180082E30 (TppDirectExecuteCallback.c)
 *     RtlSetProtectedPolicy @ 0x180083120 (RtlSetProtectedPolicy.c)
 *     TpReleasePool @ 0x180083990 (TpReleasePool.c)
 *     TppPoolpFree @ 0x180083BA8 (TppPoolpFree.c)
 *     EtwpTrackProviderBinary @ 0x180083FD0 (EtwpTrackProviderBinary.c)
 *     LdrpReleaseTlsEntry @ 0x1800840FC (LdrpReleaseTlsEntry.c)
 *     TppJobpRundownJob @ 0x180084418 (TppJobpRundownJob.c)
 *     LdrpQueueDeferredTlsData @ 0x180085A30 (LdrpQueueDeferredTlsData.c)
 *     TpSetDefaultPoolStackInformation @ 0x180085D90 (TpSetDefaultPoolStackInformation.c)
 *     RtlpRemoveVectoredHandler @ 0x180086650 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180087464 (RtlpInitializeStaticCriticalSection.c)
 *     TpDisablePoolCallbackChecks @ 0x180088310 (TpDisablePoolCallbackChecks.c)
 *     LdrFlushAlternateResourceModules @ 0x18008D340 (LdrFlushAlternateResourceModules.c)
 *     TppQueueRemoveHead @ 0x18008EC14 (TppQueueRemoveHead.c)
 *     RtlpHeapTrkTrackAdd @ 0x18008ECCC (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackStack @ 0x18008ED9C (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008EF88 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18008F120 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpTpIoDllLoaded @ 0x180090038 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800900EC (RtlpTpIoDllUnloaded.c)
 *     RtlSetIoCompletionCallback @ 0x180090290 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800903E0 (RtlpTpIoLookup.c)
 *     LdrAddDllDirectory @ 0x180090680 (LdrAddDllDirectory.c)
 *     LdrpAcquireModuleDatatableLock @ 0x1800D0628 (LdrpAcquireModuleDatatableLock.c)
 *     LdrQueryModuleServiceTags @ 0x1800D0800 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D1054 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrForkMrdata @ 0x1800D2F3C (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D4558 (RtlpLockFlsCallbackVector.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9E20 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800DA040 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DA6B8 (RtlpSignalSystemDirsModification.c)
 *     RtlGrowFunctionTable @ 0x1800DBB70 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E30A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlExtendMemoryZone @ 0x1800E3100 (RtlExtendMemoryZone.c)
 *     RtlResetMemoryZone @ 0x1800E3200 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800E4EE0 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9100 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800ED190 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800ED2C0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800ED370 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F0380 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpStdLockAcquire @ 0x1800F2DD8 (RtlpStdLockAcquire.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1800F847C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800FCCA4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800FCD18 (RtlpHpLfhOwnerLockUnlock.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800FE070 (TpSetDefaultPoolMaxThreads.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 *     TppDirectUnposted @ 0x1800FE230 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x180101458 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180101E68 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801022B4 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180102948 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlBackoff @ 0x180063160 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AC8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076164 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
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
