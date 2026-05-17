/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800D3FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x180052E50 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180077510 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2B24 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2BCC (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D2E7C (LdrForkMrdata.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D44F8 (RtlpUnlockFlsCallbackVector.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E97E8 (RtlUnlockHeapManagerForCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  void *UniqueThread; // rdx
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180151EF8 = 0LL;
    qword_180151EF0 = (__int64)UniqueThread;
    dword_180151EE8 = -2;
    dword_180151EEC = 1;
    RtlpFlsLock = 1LL;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2, v4, v5, v6);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock = 1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpUnlockFlsCallbackVector(a1);
  RtlReleaseSRWLockExclusive(&RtlpFlsLock);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v7, v8, v9);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
