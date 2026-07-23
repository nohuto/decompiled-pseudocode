/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180030740
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180008944 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000AB30 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18000ADB4 (RtlpCreateSerializationGroup.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwDeliverDataBlock @ 0x18000C140 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18000C2FC (EtwpGetNextRegistration.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180011654 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x180017204 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800347E0 (RtlpHpLfhSubsegmentCreate.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     SbAtomicCaptureContextGuid @ 0x18004328C (SbAtomicCaptureContextGuid.c)
 *     RtlProcessFlsData @ 0x180044AA0 (RtlProcessFlsData.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18005520C (RtlpSparseBitmapCtxUnlockShared.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 *     RtlpHpLargeLockReleaseShared @ 0x180058594 (RtlpHpLargeLockReleaseShared.c)
 *     TpTrimPools @ 0x180065B80 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     RtlpComputeDllPath @ 0x180067B60 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180067C30 (RtlpComputeDllPathWithOptions.c)
 *     LdrpFreeTls @ 0x18006B5A0 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     RtlCheckHeldCriticalSections @ 0x18006CE30 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x180078D90 (RtlQueryProtectedPolicy.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007D7D8 (TpPoolReferenceExistingGlobalPool.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800C0DB0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800C1F20 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x1800C3A90 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800CB764 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlpHpVirtLargeTreeFind @ 0x1800EB55C (RtlpHpVirtLargeTreeFind.c)
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800F3508 (RtlpHpLfhSubsegmentWalk.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800F3B20 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  signed __int64 v4; // rcx
  bool v5; // zf
  signed __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  signed __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 i; // rcx

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  v3 = v2;
  if ( v2 == 17 )
    return;
  if ( (v2 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v2 & 2) != 0 )
  {
LABEL_9:
    if ( (v3 & 8) != 0 )
    {
      v11 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( i = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v11[1] )
        v11 = (_QWORD *)*v11;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return;
      v7 = -9LL;
    }
    else
    {
      v7 = -1LL;
    }
    while ( 1 )
    {
      v8 = (v3 & 6) == 2 ? v7 + 4 : v7;
      v9 = v8 + v3;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8 + v3, v3);
      if ( v3 == v10 )
        break;
      v3 = v10;
    }
    if ( (v3 & 6) == 2 )
      RtlpWakeSRWLock(SRWLock, v9, 0LL);
    return;
  }
  while ( 1 )
  {
    v4 = v3 - 16;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
      v4 = 0LL;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v4, v3);
    v5 = v3 == v6;
    v3 = v6;
    if ( v5 )
      break;
    if ( (v6 & 2) != 0 )
      goto LABEL_9;
  }
}
