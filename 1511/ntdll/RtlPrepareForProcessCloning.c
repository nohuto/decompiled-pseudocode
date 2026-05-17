/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800CC2A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpCompleteProcessCloning @ 0x1800CB37C (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800CB478 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800CBAFC (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800CC508 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800CC568 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
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
  char *v9; // rbx
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
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, v0, v1, v2);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v3, v4, v5);
  v9 = (char *)&unk_1801460B8;
  v10 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v9, v6, v7, v8);
    v9 += 16;
    --v10;
  }
  while ( v10 );
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v6, v7, v8);
  LdrForkMrdata(0, v11, v12, v13);
  v15 = RtlLockHeapManagerForCloning();
  if ( v15 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v14, v16, v17);
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v19, v20, v21);
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
