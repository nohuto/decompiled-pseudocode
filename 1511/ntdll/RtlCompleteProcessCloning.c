/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800CC020
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800536B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x18005C070 (RtlWakeAllConditionVariable.c)
 *     LdrpCompleteProcessCloning @ 0x1800CB37C (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800CB478 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800CBAFC (LdrForkMrdata.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800CC568 (RtlpUnlockFlsCallbackVector.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E067C (RtlUnlockHeapManagerForCloning.c)
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
    qword_180144E98 = 0LL;
    qword_180144E90 = (__int64)UniqueThread;
    dword_180144E88 = -2;
    dword_180144E8C = 1;
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
