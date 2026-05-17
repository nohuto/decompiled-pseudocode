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

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  char v8; // si
  unsigned int v10; // ebx
  int v11; // r13d
  unsigned int v12; // ebp
  bool v13; // zf
  char v14; // al
  int v15; // ecx
  int v16; // esi
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rbx
  __int64 v27; // rdi
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
  int v41; // [rsp+90h] [rbp+8h]

  v8 = a1;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  v13 = (a1 & 2) == 0;
  v14 = a1;
  v15 = 0;
  if ( !v13 )
    v11 = 4;
  if ( (v14 & 1) != 0 )
    v15 = 1;
  v41 = v15;
  v16 = v8 & 4;
  if ( v16 )
    goto LABEL_16;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return (unsigned int)-1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, v17, v18, v19);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v20, v21, v22);
  v26 = (char *)&unk_1801460B8;
  v27 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v26, v23, v24, v25);
    v26 += 16;
    --v27;
  }
  while ( v27 );
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v23, v24, v25);
  LdrForkMrdata(0LL);
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
    LdrForkMrdata(2LL);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(0LL);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(0LL);
  }
  if ( v29 < 0 )
    return (unsigned int)v29;
  v15 = v41;
  v10 = 0;
LABEL_16:
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, a2, a3, 0LL, 0, v11, v15, a4, 0LL, a5);
  v36 = UserProcess;
  if ( !v16 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v10 = 1;
      v12 = 1;
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
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v12);
    if ( v12 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v10);
    LdrpUnlockTlsDelayedReclaimTable(v10);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(v10);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(v10);
    if ( v10 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v38, v39, v40);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v36;
}
