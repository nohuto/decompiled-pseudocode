/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180020BF0
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
 *     RtlSetSearchPathMode @ 0x1800069D0 (RtlSetSearchPathMode.c)
 *     RtlProcessFlsData @ 0x1800071A0 (RtlProcessFlsData.c)
 *     RtlReleasePath @ 0x1800091A0 (RtlReleasePath.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C360 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpGetCachedPath @ 0x18000CAF0 (RtlpGetCachedPath.c)
 *     LdrpComputeLazyDllPath @ 0x18000D37C (LdrpComputeLazyDllPath.c)
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     AlpcGetMessageFromCompletionList @ 0x18001A2B0 (AlpcGetMessageFromCompletionList.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     RtlpHpVsChunkSplit @ 0x18001C5A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18001CC40 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocate @ 0x18001D100 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18001D3C8 (RtlpHpLfhSubsegmentLockOwner.c)
 *     TppAlpcpExecuteCallback @ 0x18001D460 (TppAlpcpExecuteCallback.c)
 *     RtlpHpHeapLock @ 0x18001E6B8 (RtlpHpHeapLock.c)
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x180020180 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180029564 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296B0 (RtlpCreateWnfNameSubscription.c)
 *     EtwpFindRegistration @ 0x18002A0E0 (EtwpFindRegistration.c)
 *     EtwNotificationRegister @ 0x18002A410 (EtwNotificationRegister.c)
 *     EtwpInsertRegistration @ 0x18002A86C (EtwpInsertRegistration.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B140 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrProtectMrdataHeap @ 0x18002D9F4 (LdrProtectMrdataHeap.c)
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002E6EC (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F770 (RtlInsertInvertedFunctionTable.c)
 *     LdrpProcessMappedModule @ 0x18002F938 (LdrpProcessMappedModule.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180030098 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C90 (LdrpIncrementModuleLoadCount.c)
 *     TpReleaseTimer @ 0x18003A490 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x18003AC60 (TppWaitCompletion.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5F0 (TppCleanupGroupMemberDestroy.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     TpWaitForTimer @ 0x18003B8F0 (TpWaitForTimer.c)
 *     RtlpHpSegLockAcquire @ 0x18003BB8C (RtlpHpSegLockAcquire.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 *     TpSetTimerEx @ 0x18003C000 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18003C388 (TppSetTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x18003CC28 (TppSingleTimerExpiration.c)
 *     TpPostTask @ 0x18003D028 (TpPostTask.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D83C (TppCleanupGroupMemberInitialize.c)
 *     RtlpHpSegPageRangeShrink @ 0x18003E92C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA8C (RtlpHpSegPageRangeAllocate.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18003F8CC (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419C4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9B4 (RtlpHpLargeLockAcquire.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF50 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlFlsAlloc @ 0x1800501A0 (RtlFlsAlloc.c)
 *     RtlFlsFree @ 0x180050A10 (RtlFlsFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050C04 (RtlpHpTagContextAllocateTag.c)
 *     RtlDeleteCriticalSection @ 0x1800523B0 (RtlDeleteCriticalSection.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180053820 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpDisableTraceProviders @ 0x180053E90 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x1800541CC (EtwpGetNextRegistration.c)
 *     RtlpGetNormalization @ 0x180058730 (RtlpGetNormalization.c)
 *     EtwNotificationUnregister @ 0x180059700 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180059814 (EtwpRemoveRegistrationFromTable.c)
 *     TpTrimPools @ 0x180062620 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180062960 (RtlSleepConditionVariableSRW.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DF8 (TppPoolUpdateTrimmedWorker.c)
 *     TpReleaseCleanupGroupMembers @ 0x180063BA0 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppTimerpStopCallbackGeneration @ 0x180064070 (TppTimerpStopCallbackGeneration.c)
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x180064310 (RtlUpdateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180064430 (RtlDeregisterWaitEx.c)
 *     TpReleaseWait @ 0x180064590 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180064648 (TpWaitOutstandingCallbackCount.c)
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800647E0 (TpTimerOutstandingCallbackCount.c)
 *     RtlCreateTimer @ 0x180064830 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064AA0 (RtlRegisterWait.c)
 *     TpWaitForWait @ 0x180064F40 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x180065080 (TppStopWaitCallbackGeneration.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AE0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D48 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065F08 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663C8 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D88 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCallVectoredHandlers @ 0x18006701C (RtlpCallVectoredHandlers.c)
 *     RtlpLockAtomTable @ 0x18006823C (RtlpLockAtomTable.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006E8C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlDeleteFunctionTable @ 0x18006E9D0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F130 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F460 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     TpAllocPoolInternal @ 0x180072E74 (TpAllocPoolInternal.c)
 *     LdrpLoadContextReplaceModule @ 0x180073728 (LdrpLoadContextReplaceModule.c)
 *     LdrpBuildForwarderLink @ 0x180073888 (LdrpBuildForwarderLink.c)
 *     LdrpCondenseGraphRecurse @ 0x180074658 (LdrpCondenseGraphRecurse.c)
 *     RtlpAddVectoredHandler @ 0x180074B20 (RtlpAddVectoredHandler.c)
 *     RtlpCreateSerializationGroup @ 0x180074C90 (RtlpCreateSerializationGroup.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180074DB4 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpFindLoadedDllByAddress @ 0x180076080 (LdrpFindLoadedDllByAddress.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770D8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegLfhExtendContext @ 0x180077420 (RtlpHpSegLfhExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180077510 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMapping @ 0x180078560 (LdrpFindLoadedDllByMapping.c)
 *     LdrpCleanupThreadTlsData @ 0x1800796F8 (LdrpCleanupThreadTlsData.c)
 *     TppCleanupGroupAddMember @ 0x18007A224 (TppCleanupGroupAddMember.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA84 (RtlRemoveInvertedFunctionTable.c)
 *     LdrpPinModule @ 0x18007E418 (LdrpPinModule.c)
 *     TppCleanupGroupRemoveMember @ 0x18007EA8C (TppCleanupGroupRemoveMember.c)
 *     RtlpTpWaitCheckReset @ 0x18007FE88 (RtlpTpWaitCheckReset.c)
 *     TppPoolAddWorker @ 0x18007FFF0 (TppPoolAddWorker.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     TppPoolRemoveWorker @ 0x180081E68 (TppPoolRemoveWorker.c)
 *     LdrGetDllDirectory @ 0x1800820D0 (LdrGetDllDirectory.c)
 *     LdrpInsertModuleToIndex @ 0x1800828D8 (LdrpInsertModuleToIndex.c)
 *     TppDirectExecuteCallback @ 0x180082E40 (TppDirectExecuteCallback.c)
 *     RtlSetProtectedPolicy @ 0x180083130 (RtlSetProtectedPolicy.c)
 *     TpReleasePool @ 0x1800839A0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x180083BB8 (TppPoolpFree.c)
 *     EtwpTrackProviderBinary @ 0x180083FE0 (EtwpTrackProviderBinary.c)
 *     LdrpReleaseTlsEntry @ 0x18008410C (LdrpReleaseTlsEntry.c)
 *     TppJobpRundownJob @ 0x180084428 (TppJobpRundownJob.c)
 *     LdrpQueueDeferredTlsData @ 0x180085A40 (LdrpQueueDeferredTlsData.c)
 *     TpSetDefaultPoolStackInformation @ 0x180085DA0 (TpSetDefaultPoolStackInformation.c)
 *     RtlpRemoveVectoredHandler @ 0x180086660 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180087474 (RtlpInitializeStaticCriticalSection.c)
 *     TpDisablePoolCallbackChecks @ 0x180088320 (TpDisablePoolCallbackChecks.c)
 *     LdrFlushAlternateResourceModules @ 0x18008D350 (LdrFlushAlternateResourceModules.c)
 *     TppQueueRemoveHead @ 0x18008EC24 (TppQueueRemoveHead.c)
 *     RtlpHeapTrkTrackAdd @ 0x18008ECDC (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackStack @ 0x18008EDAC (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008EF98 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18008F130 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpTpIoDllLoaded @ 0x180090048 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800900FC (RtlpTpIoDllUnloaded.c)
 *     RtlSetIoCompletionCallback @ 0x1800902A0 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800903F0 (RtlpTpIoLookup.c)
 *     LdrAddDllDirectory @ 0x180090690 (LdrAddDllDirectory.c)
 *     LdrpAcquireModuleDatatableLock @ 0x1800D0568 (LdrpAcquireModuleDatatableLock.c)
 *     LdrQueryModuleServiceTags @ 0x1800D0740 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0F94 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrForkMrdata @ 0x1800D2E7C (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D4498 (RtlpLockFlsCallbackVector.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9D60 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800D9F80 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DA5F8 (RtlpSignalSystemDirsModification.c)
 *     RtlGrowFunctionTable @ 0x1800DBAB0 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E2FE0 (RtlResetMemoryBlockLookaside.c)
 *     RtlExtendMemoryZone @ 0x1800E3040 (RtlExtendMemoryZone.c)
 *     RtlResetMemoryZone @ 0x1800E3140 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800E4E20 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9040 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800ED0D0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800ED200 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800ED2B0 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F0380 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpStdLockAcquire @ 0x1800F2DD8 (RtlpStdLockAcquire.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1800F847C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800FCCA4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800FCD18 (RtlpHpLfhOwnerLockUnlock.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800FE070 (TpSetDefaultPoolMaxThreads.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 *     TppDirectUnposted @ 0x1800FE230 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x180101518 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x1801018D4 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180101F28 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180102374 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180102A08 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlBackoff @ 0x180063170 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AD8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076174 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

void __fastcall RtlAcquireSRWLockExclusive(unsigned __int64 UniqueThread, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  unsigned __int64 v5; // rbx
  bool v6; // zf
  signed __int64 v7; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  signed __int32 v14[5]; // [rsp+44h] [rbp-14h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = (volatile signed __int64 *)UniqueThread;
  v15 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)UniqueThread, 0LL) )
  {
    v5 = *(_QWORD *)UniqueThread;
    while ( 1 )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, a2, a3, a4, v9) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v12 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v14[0] = 3;
        v11 = 0LL;
        if ( (v5 & 2) != 0 )
        {
          v10 = 0LL;
          v13 = -1;
          v9 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (char *)((unsigned __int64)&v9 | v5 & 8 | 7);
          LOBYTE(UniqueThread) = (v5 & 4) == 0;
        }
        else
        {
          v10 = &v9;
          v13 = v5 >> 4;
          if ( v13 > 1 )
            a2 = (char *)((unsigned __int64)&v9 | 0xB);
          else
            a2 = (char *)&v9 + 3;
          if ( !(unsigned int)(v5 >> 4) )
            v13 = -2;
        }
        v7 = _InterlockedCompareExchange64(v4, (signed __int64)a2, v5);
        v6 = v5 == v7;
        v5 = v7;
        if ( !v6 )
          goto LABEL_13;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(v4);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v14[0] & 2) == 0 )
                break;
              _mm_pause();
              v6 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
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
        if ( v5 == _InterlockedCompareExchange64(v4, v5 + 1, v5) )
          return;
LABEL_13:
        RtlBackoff(&v15);
        _m_prefetchw((const void *)v4);
        v5 = *v4;
      }
    }
  }
}
