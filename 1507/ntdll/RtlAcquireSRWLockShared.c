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
