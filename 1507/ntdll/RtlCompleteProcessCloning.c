/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800C2620
 * Callers:
 *     <none>
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180009A40 (RtlWakeAllConditionVariable.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18006C900 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800C0D1C (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800C0DB0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800C143C (LdrForkMrdata.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800C2B68 (RtlpUnlockFlsCallbackVector.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800D8620 (RtlUnlockHeapManagerForCloning.c)
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
    qword_180145E58 = 0LL;
    qword_180145E50 = (__int64)UniqueThread;
    dword_180145E48 = -2;
    dword_180145E4C = 1;
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
