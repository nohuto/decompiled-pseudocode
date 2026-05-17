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
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rdi
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rdx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlAcquireSRWLockExclusive(&RtlpFlsLock, v0, v1, v2);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v3, v4, v5);
  v9 = (volatile signed __int64 *)&unk_180147008;
  v10 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v9, v6, v7, v8);
    v9 += 2;
    --v10;
  }
  while ( v10 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock, v6, v7, v8);
  LdrForkMrdata(0, v11, v12, v13);
  v15 = RtlLockHeapManagerForCloning();
  if ( v15 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock, v14, v16, v17);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock, v19, v20, v21);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2, v14, v16, v17);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(0LL);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(0);
    return (unsigned int)v15;
  }
  return result;
}
