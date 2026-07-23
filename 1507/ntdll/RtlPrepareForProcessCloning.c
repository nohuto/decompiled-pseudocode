/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800C28A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     LdrpCompleteProcessCloning @ 0x1800C0D1C (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800C0DB0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800C143C (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800C2B08 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800C2B68 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
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
  v0 = &stru_180147008;
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
