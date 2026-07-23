/*
 * XREFs of RtlCloneUserProcess @ 0x1800D3DC0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlWakeAllConditionVariable @ 0x180052E40 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180077500 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x18008CBC8 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2BE4 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2C8C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D2F3C (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D4558 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D45B8 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9100 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E98A8 (RtlUnlockHeapManagerForCloning.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  unsigned int v9; // ebx
  ULONG v10; // r13d
  int v11; // eax
  int v12; // ebp
  ULONG v13; // esi
  _RTL_SRWLOCK *v14; // rbx
  __int64 v15; // rdi
  NTSTATUS v16; // ebx
  NTSTATUS UserProcess; // eax
  NTSTATUS v18; // edi
  void *UniqueThread; // rdx
  ULONG v20; // [rsp+90h] [rbp+8h]

  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  if ( (ProcessFlags & 2) != 0 )
    v10 = 4;
  if ( (ProcessFlags & 1) != 0 )
    v11 = 1;
  v20 = v11;
  v13 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) != 0 )
    goto LABEL_16;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return -1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  RtlAcquireSRWLockExclusive(&RtlpFlsLock);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection(&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v14 = &stru_1801531F8;
  v15 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v14);
    v14 += 2;
    --v15;
  }
  while ( v15 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0);
  v16 = RtlLockHeapManagerForCloning();
  if ( v16 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    LdrpForkInProgress = 1;
    v16 = 0;
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
  }
  if ( v16 < 0 )
    return v16;
  v9 = 0;
LABEL_16:
  UserProcess = RtlpCreateUserProcess(
                  0LL,
                  0LL,
                  ProcessSecurityDescriptor,
                  ThreadSecurityDescriptor,
                  0LL,
                  0,
                  v10,
                  v20,
                  (ULONG_PTR)DebugPort,
                  0LL,
                  ProcessInformation);
  v18 = UserProcess;
  if ( !v13 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      v9 = 1;
      v12 = 1;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      FastPebLock.LockSemaphore = 0LL;
      FastPebLock.OwningThread = UniqueThread;
      FastPebLock.LockCount = -2;
      FastPebLock.RecursionCount = 1;
      RtlpFlsLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v12);
    if ( v12 == 1 )
      RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v9);
    LdrpUnlockTlsDelayedReclaimTable(v9);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpUnlockFlsCallbackVector(v9);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(v9);
    if ( v9 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v18;
}
