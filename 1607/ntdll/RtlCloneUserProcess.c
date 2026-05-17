/*
 * XREFs of RtlCloneUserProcess @ 0x1800D3D00
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18002D51C (LdrpAcquireLoaderLock.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlWakeAllConditionVariable @ 0x180052E50 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180077510 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x18008CBD8 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2B24 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2BCC (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D2E7C (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D4498 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D44F8 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9040 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E97E8 (RtlUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned int v9; // ebx
  int v10; // r13d
  int v11; // eax
  int v12; // ebp
  int v13; // esi
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rbx
  __int64 v24; // rdi
  char *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rdx
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int UserProcess; // eax
  unsigned int v36; // edi
  void *UniqueThread; // rdx
  char *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // [rsp+90h] [rbp+8h]

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  if ( (a1 & 2) != 0 )
    v10 = 4;
  if ( (a1 & 1) != 0 )
    v11 = 1;
  v44 = v11;
  v13 = a1 & 4;
  if ( (a1 & 4) != 0 )
    goto LABEL_16;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return (unsigned int)-1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, v14, v15, v16);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v17, v18, v19);
  v23 = (char *)&unk_1801531F8;
  v24 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v23, v20, v21, v22);
    v23 += 16;
    --v24;
  }
  while ( v24 );
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v20, v21, v22);
  LdrForkMrdata(0, v25, v26, v27);
  v29 = RtlLockHeapManagerForCloning();
  if ( v29 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v28, v30, v31);
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v32, v33, v34);
    LdrpForkInProgress = 1;
    v29 = 0;
  }
  else
  {
    LdrForkMrdata(2, v28, v30, v31);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(0LL);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(0);
  }
  if ( v29 < 0 )
    return (unsigned int)v29;
  v9 = 0;
LABEL_16:
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, a2, a3, 0LL, 0, v10, v44, a4, 0LL, a5);
  v36 = UserProcess;
  if ( !v13 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v9 = 1;
      v12 = 1;
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
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v12, v38, v39, v40);
    if ( v12 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v9);
    LdrpUnlockTlsDelayedReclaimTable(v9);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(v9);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(v9);
    if ( v9 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v41, v42, v43);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v36;
}
