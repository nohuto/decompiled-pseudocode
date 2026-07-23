/*
 * XREFs of RtlAcquireSRWLockShared @ 0x1800277C0
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
 *     RtlpSparseBitmapCtxLockShared @ 0x180040260 (RtlpSparseBitmapCtxLockShared.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x180050388 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpLfhOwnerCompact @ 0x180050984 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateSerializationGroup @ 0x180051C38 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x180053A70 (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180058054 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x18005AAAC (RtlpHpLargeLockAcquireShared.c)
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
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800CD0E0 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D15A8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D19B0 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800D3FA4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpHpTagContextGetTag @ 0x1800EE940 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18002F6E0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x180068D00 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075544 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A8770 (NtWaitForAlertByThreadId.c)
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
  unsigned __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+40h] [rbp-18h]
  signed __int32 v16[5]; // [rsp+44h] [rbp-14h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF

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
          goto LABEL_14;
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
LABEL_14:
        RtlBackoff(&v17);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
