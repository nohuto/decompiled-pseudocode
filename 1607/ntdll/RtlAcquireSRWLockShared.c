/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180042640
 * Callers:
 *     RtlProcessFlsData @ 0x180007190 (RtlProcessFlsData.c)
 *     RtlpComputeDllPath @ 0x18000BB20 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18000CC20 (RtlpComputeDllPathWithOptions.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296A0 (RtlpCreateWnfNameSubscription.c)
 *     SbAtomicCaptureContextGuid @ 0x18002C6D0 (SbAtomicCaptureContextGuid.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A30 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D298 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18004E850 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180050BD4 (RtlpHpLargeLockAcquireShared.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
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
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5100 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D9A18 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9E20 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC434 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800E4F34 (RtlPosixBarrier.c)
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801022B4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x180063160 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AC8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076164 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 UniqueThread; // rcx
  unsigned __int64 Value; // rbx
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  signed __int32 v16[9]; // [rsp+44h] [rbp-24h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0;
  UniqueThread = 17LL;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      if ( (Value & 1) != 0 && (((Value >> 1) & 1) != 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v1, v2, v3, v11) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v14 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v16[0] = 2;
        v13 = 0LL;
        if ( ((Value >> 1) & 1) != 0 )
        {
          v12 = 0LL;
          v15 = -1;
          v11 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (char *)((unsigned __int64)&v11 | Value & 8 | 7);
          LOBYTE(UniqueThread) = (Value & 4) == 0;
        }
        else
        {
          v15 = -2;
          v12 = &v11;
          v1 = (char *)&v11 + 3;
        }
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, (signed __int64)v1, Value);
        v8 = Value == v9;
        Value = v9;
        if ( !v8 )
          goto LABEL_8;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v16[0] & 2) == 0 )
                break;
              _mm_pause();
              v8 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v8 );
          }
        }
        if ( _interlockedbittestandreset(v16, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v16[0] & 4) == 0 );
        }
      }
      else
      {
        v7 = Value | 1;
        if ( (Value & 2) == 0 )
          v7 += 16LL;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, Value) )
          return;
LABEL_8:
        RtlBackoff(&v17);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
