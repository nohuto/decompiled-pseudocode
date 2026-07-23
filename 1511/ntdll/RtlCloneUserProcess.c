/*
 * XREFs of RtlCloneUserProcess @ 0x18008D540
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800536B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x18005C070 (RtlWakeAllConditionVariable.c)
 *     RtlpCreateUserProcess @ 0x180088688 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800CB37C (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800CB478 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800CBAFC (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800CC508 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800CC568 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E067C (RtlUnlockHeapManagerForCloning.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  char v8; // si
  unsigned int v10; // ebx
  ULONG v11; // r13d
  unsigned int v12; // ebp
  bool v13; // zf
  char v14; // al
  ULONG v15; // ecx
  int v16; // esi
  _RTL_SRWLOCK *v17; // rbx
  __int64 v18; // rdi
  NTSTATUS v19; // ebx
  NTSTATUS UserProcess; // eax
  NTSTATUS v21; // edi
  void *UniqueThread; // rdx
  ULONG v23; // [rsp+90h] [rbp+8h]

  v8 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  v13 = (ProcessFlags & 2) == 0;
  v14 = ProcessFlags;
  v15 = 0;
  if ( !v13 )
    v11 = 4;
  if ( (v14 & 1) != 0 )
    v15 = 1;
  v23 = v15;
  v16 = v8 & 4;
  if ( v16 )
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
  v17 = &stru_1801460B8;
  v18 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v17);
    v17 += 2;
    --v18;
  }
  while ( v18 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0LL);
  v19 = RtlLockHeapManagerForCloning();
  if ( v19 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    LdrpForkInProgress = 1;
    v19 = 0;
  }
  else
  {
    LdrForkMrdata(2LL);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpUnlockFlsCallbackVector(0LL);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(0LL);
  }
  if ( v19 < 0 )
    return v19;
  v15 = v23;
  v10 = 0;
LABEL_16:
  UserProcess = RtlpCreateUserProcess(
                  0LL,
                  0LL,
                  ProcessSecurityDescriptor,
                  ThreadSecurityDescriptor,
                  0LL,
                  0,
                  v11,
                  v15,
                  (ULONG_PTR)DebugPort,
                  0LL,
                  ProcessInformation);
  v21 = UserProcess;
  if ( !v16 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      v10 = 1;
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
    RtlUnlockHeapManagerForCloning(v10);
    LdrpUnlockTlsDelayedReclaimTable(v10);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpUnlockFlsCallbackVector(v10);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(v10);
    if ( v10 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v21;
}
