/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800D4310
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2BE4 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2C8C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D2F3C (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D4558 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D45B8 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9100 (RtlLockHeapManagerForCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi
  int v2; // ebx
  __int64 result; // rax

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  RtlAcquireSRWLockExclusive(&RtlpFlsLock);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection(&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_1801531F8;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0);
  v2 = RtlLockHeapManagerForCloning();
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpUnlockFlsCallbackVector(0LL);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(0);
    return (unsigned int)v2;
  }
  return result;
}
