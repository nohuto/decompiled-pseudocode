/*
 * XREFs of RtlCloneUserProcess @ 0x1800C2340
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180009A40 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18006C900 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x180080478 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800C0D1C (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800C0DB0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800C143C (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800C2B08 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800C2B68 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800D8620 (RtlUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  char v8; // si
  unsigned int v10; // ebx
  int v11; // r13d
  int v12; // ebp
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
  volatile signed __int64 *v26; // rbx
  __int64 v27; // rdi
  char *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rdx
  int v32; // ebx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int UserProcess; // eax
  unsigned int v39; // edi
  void *UniqueThread; // rdx
  char *v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // [rsp+90h] [rbp+8h]

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
  v47 = v15;
  v16 = v8 & 4;
  if ( v16 )
    goto LABEL_16;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return (unsigned int)-1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlAcquireSRWLockExclusive(&RtlpFlsLock, v17, v18, v19);
  RtlpLockFlsCallbackVector();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v20, v21, v22);
  v26 = (volatile signed __int64 *)&unk_180147008;
  v27 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v26, v23, v24, v25);
    v26 += 2;
    --v27;
  }
  while ( v27 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock, v23, v24, v25);
  LdrForkMrdata(0, v28, v29, v30);
  v32 = RtlLockHeapManagerForCloning();
  if ( v32 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock, v31, v33, v34);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock, v35, v36, v37);
    LdrpForkInProgress = 1;
    v32 = 0;
  }
  else
  {
    LdrForkMrdata(2, v31, v33, v34);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(0LL);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(0);
  }
  if ( v32 < 0 )
    return (unsigned int)v32;
  v15 = v47;
  v10 = 0;
LABEL_16:
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, a2, a3, 0LL, 0, v11, v15, a4, 0LL, a5);
  v39 = UserProcess;
  if ( !v16 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v10 = 1;
      v12 = 1;
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
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v12, v41, v42, v43);
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
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v44, v45, v46);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v39;
}
