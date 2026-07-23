/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180042560
 * Callers:
 *     RtlProcessFlsData @ 0x180007190 (RtlProcessFlsData.c)
 *     RtlpComputeDllPath @ 0x18000BB20 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18000CC20 (RtlpComputeDllPathWithOptions.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296A0 (RtlpCreateWnfNameSubscription.c)
 *     SbAtomicCaptureContextGuid @ 0x18002C6D0 (SbAtomicCaptureContextGuid.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A30 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D298 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18004E850 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpLargeLockReleaseShared @ 0x18004F5D8 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 *     EtwDeliverDataBlock @ 0x180054000 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x1800541BC (EtwpGetNextRegistration.c)
 *     TpTrimPools @ 0x180062610 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180062950 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D38 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpHpTagContextUpdate @ 0x1800736B8 (RtlpHpTagContextUpdate.c)
 *     RtlpCreateSerializationGroup @ 0x180074C80 (RtlpCreateSerializationGroup.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     LdrpFreeTls @ 0x18007962C (LdrpFreeTls.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180080810 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlpHpTagQueryTags @ 0x180081A60 (RtlpHpTagQueryTags.c)
 *     RtlCheckHeldCriticalSections @ 0x180082490 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800851D0 (RtlQueryProtectedPolicy.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180085EDC (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2C8C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800D39B0 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5100 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D9A18 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9E20 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC434 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800E4F34 (RtlPosixBarrier.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800FD080 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801022B4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
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
