/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180042570
 * Callers:
 *     RtlProcessFlsData @ 0x1800071A0 (RtlProcessFlsData.c)
 *     RtlpComputeDllPath @ 0x18000BB30 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18000CC30 (RtlpComputeDllPathWithOptions.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296B0 (RtlpCreateWnfNameSubscription.c)
 *     SbAtomicCaptureContextGuid @ 0x18002C6E0 (SbAtomicCaptureContextGuid.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A40 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419C4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041F0C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D2A8 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18004E860 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpLargeLockReleaseShared @ 0x18004F5E8 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14 (RtlpSparseBitmapCtxUnlockShared.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x1800541CC (EtwpGetNextRegistration.c)
 *     TpTrimPools @ 0x180062620 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180062960 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D48 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpHpTagContextUpdate @ 0x1800736C8 (RtlpHpTagContextUpdate.c)
 *     RtlpCreateSerializationGroup @ 0x180074C90 (RtlpCreateSerializationGroup.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpFreeTls @ 0x18007963C (LdrpFreeTls.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180080820 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlpHpTagQueryTags @ 0x180081A70 (RtlpHpTagQueryTags.c)
 *     RtlCheckHeldCriticalSections @ 0x1800824A0 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800851E0 (RtlQueryProtectedPolicy.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180085EEC (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2BCC (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800D38F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5040 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D9958 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9D60 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC374 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800E4E74 (RtlPosixBarrier.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800FD080 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x1801018D4 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180102374 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 */

unsigned __int64 __fastcall RtlReleaseSRWLockShared(volatile signed __int64 *a1)
{
  unsigned __int64 result; // rax
  signed __int64 v3; // rdx
  signed __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 i; // rcx

  result = _InterlockedCompareExchange64(a1, 0LL, 17LL);
  v3 = result;
  if ( result == 17 )
    return result;
  if ( (result & 1) == 0 )
    RtlRaiseStatus(3221226084LL);
  if ( (result & 2) != 0 )
  {
LABEL_9:
    if ( (v3 & 8) != 0 )
    {
      result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      for ( i = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = *(_QWORD *)(result + 8) )
        result = *(_QWORD *)result;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return result;
      v6 = -9LL;
    }
    else
    {
      v6 = -1LL;
    }
    while ( 1 )
    {
      v7 = (v3 & 6) == 2 ? v6 + 4 : v6;
      v8 = v7 + v3;
      result = _InterlockedCompareExchange64(a1, v7 + v3, v3);
      if ( v3 == result )
        break;
      v3 = result;
    }
    if ( (v3 & 6) == 2 )
      return RtlpWakeSRWLock(a1, v8, 0LL);
    return result;
  }
  while ( 1 )
  {
    v4 = v3 - 16;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
      v4 = 0LL;
    result = _InterlockedCompareExchange64(a1, v4, v3);
    v5 = v3 == result;
    v3 = result;
    if ( v5 )
      return result;
    if ( (result & 2) != 0 )
      goto LABEL_9;
  }
}
