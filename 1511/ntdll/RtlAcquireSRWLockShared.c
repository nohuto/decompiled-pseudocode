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

signed __int64 __fastcall RtlAcquireSRWLockShared(volatile signed __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 UniqueThread; // rcx
  signed __int64 result; // rax
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  signed __int32 v17[5]; // [rsp+44h] [rbp-14h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  UniqueThread = 17LL;
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  v7 = result;
  if ( result )
  {
    while ( 1 )
    {
      if ( (v7 & 1) != 0 && (((v7 >> 1) & 1) != 0 || (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, a2, a3, a4, v12) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v15 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v17[0] = 2;
        v14 = 0LL;
        if ( ((v7 >> 1) & 1) != 0 )
        {
          v13 = 0LL;
          v16 = -1;
          v12 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (char *)((unsigned __int64)&v12 | v7 & 8 | 7);
          LOBYTE(UniqueThread) = (v7 & 4) == 0;
        }
        else
        {
          v16 = -2;
          v13 = &v12;
          a2 = (char *)&v12 + 3;
        }
        v10 = _InterlockedCompareExchange64(a1, (signed __int64)a2, v7);
        v9 = v7 == v10;
        v7 = v10;
        if ( !v9 )
          goto LABEL_14;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(a1);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v17[0] & 2) == 0 )
                break;
              _mm_pause();
              v9 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v9 );
          }
        }
        if ( _interlockedbittestandreset(v17, 1u) )
        {
          do
            NtWaitForAlertByThreadId(a1, 0LL);
          while ( (v17[0] & 4) == 0 );
        }
      }
      else
      {
        v8 = v7 | 1;
        if ( (v7 & 2) == 0 )
          v8 += 16LL;
        result = _InterlockedCompareExchange64(a1, v8, v7);
        if ( v7 == result )
          return result;
LABEL_14:
        RtlBackoff(&v18);
        _m_prefetchw((const void *)a1);
        v7 = *a1;
      }
    }
  }
  return result;
}
