/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180030820
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180008944 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000AB30 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18000ADB4 (RtlpCreateSerializationGroup.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
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
 *     RtlpSparseBitmapCtxLockShared @ 0x18005522C (RtlpSparseBitmapCtxLockShared.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 *     RtlpHpLargeLockAcquireShared @ 0x180058A70 (RtlpHpLargeLockAcquireShared.c)
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
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800C3A90 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800CB764 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlpHpVirtLargeTreeFind @ 0x1800EB55C (RtlpHpVirtLargeTreeFind.c)
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800F3508 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x1800360D0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
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
