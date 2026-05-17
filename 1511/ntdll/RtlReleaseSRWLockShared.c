/*
 * XREFs of RtlReleaseSRWLockShared @ 0x1800276F0
 * Callers:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180007370 (RtlpWnfProcessCurrentDescriptor.c)
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x180025060 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     LdrpGetFromMUIMemCache @ 0x18003195C (LdrpGetFromMUIMemCache.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x180040240 (RtlpSparseBitmapCtxUnlockShared.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x180050388 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpLfhOwnerCompact @ 0x180050984 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateSerializationGroup @ 0x180051C38 (RtlpCreateSerializationGroup.c)
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180052AFC (EtwpGetNextRegistration.c)
 *     RtlpCreateWnfNameSubscription @ 0x180053A70 (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180058054 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLargeLockReleaseShared @ 0x18005A48C (RtlpHpLargeLockReleaseShared.c)
 *     RtlProcessFlsData @ 0x18005B3E0 (RtlProcessFlsData.c)
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpTagContextUpdate @ 0x180071254 (RtlpHpTagContextUpdate.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180071CC4 (RtlpLookupDynamicFunctionEntry.c)
 *     SbAtomicCaptureContextGuid @ 0x1800723A4 (SbAtomicCaptureContextGuid.c)
 *     RtlpComputeDllPath @ 0x180072DB0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180072E80 (RtlpComputeDllPathWithOptions.c)
 *     LdrpFreeTls @ 0x180076468 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     RtlCheckHeldCriticalSections @ 0x18007EC20 (RtlCheckHeldCriticalSections.c)
 *     RtlpHpTagQueryTags @ 0x18007FED8 (RtlpHpTagQueryTags.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18008146C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlQueryProtectedPolicy @ 0x180088F40 (RtlQueryProtectedPolicy.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800CB478 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800CBC40 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x1800CD0E0 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D15A8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D19B0 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800D3FA4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpHpTagContextGetTag @ 0x1800EE940 (RtlpHpTagContextGetTag.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800F39C0 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x1800755AC (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
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
