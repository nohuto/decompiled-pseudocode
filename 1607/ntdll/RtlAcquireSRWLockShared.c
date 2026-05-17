/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180042650
 * Callers:
 *     RtlProcessFlsData @ 0x1800071A0 (RtlProcessFlsData.c)
 *     RtlpComputeDllPath @ 0x18000BB30 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18000CC30 (RtlpComputeDllPathWithOptions.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296B0 (RtlpCreateWnfNameSubscription.c)
 *     SbAtomicCaptureContextGuid @ 0x18002C6E0 (SbAtomicCaptureContextGuid.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A40 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419C4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041F0C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D2A8 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18004E860 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE34 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180050BE4 (RtlpHpLargeLockAcquireShared.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
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
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5040 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D9958 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9D60 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC374 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800E4E74 (RtlPosixBarrier.c)
 *     RtlStackDbStackAdd @ 0x1801018D4 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180102374 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x180063170 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AD8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076174 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlAcquireSRWLockShared(volatile signed __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 UniqueThread; // rcx
  signed __int64 result; // rax
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  signed __int32 v17[9]; // [rsp+44h] [rbp-24h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

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
          goto LABEL_8;
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
LABEL_8:
        RtlBackoff(&v18);
        _m_prefetchw((const void *)a1);
        v7 = *a1;
      }
    }
  }
  return result;
}
