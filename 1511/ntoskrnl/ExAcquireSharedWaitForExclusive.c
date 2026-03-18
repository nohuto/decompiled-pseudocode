/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x1400CF384
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140213D78 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x1406C92F8 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x1406C9370 (VerifierExAcquireSharedWaitForExclusiveNoReboot.c)
 * Callees:
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     ExpWaitForResource @ 0x14007F400 (ExpWaitForResource.c)
 *     ExpFindEmptyEntry @ 0x1400CF32C (ExpFindEmptyEntry.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140210238 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402106F4 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  ULONG ActiveEntries; // eax
  ULONG v9; // eax
  _QWORD *EmptyEntry; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  volatile signed __int64 *v26[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v27[5]; // [rsp+48h] [rbp-28h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x637Cu);
  CurrentThread = KeGetCurrentThread();
  KeFastAcquireInStackQueuedSpinLockAndRaise(&Resource->SpinLock, v26);
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v9 = Resource->OwnerEntry.TableSize & 3;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->OwnerEntry.TableSize = v9 | 4;
        goto LABEL_13;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
      {
        if ( Wait )
        {
          ++Resource->NumberOfSharedWaiters;
          memset(v27, 0, 0x20uLL);
          HIDWORD(v27[1]) = 0;
          v27[3] = &v27[2];
          LOWORD(v27[1]) = 1;
          v27[2] = &v27[2];
          v27[0] = Resource->SharedWaiters;
          Resource->SharedWaiters = v27;
          BYTE2(v27[1]) = 6;
          ExpUnlockResource(v18, (__int64)v26, v19, v20);
          __incgsdword(0x638Cu);
          if ( v4 )
            PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
          ExpWaitForResource((__int64)Resource, &v27[1]);
          ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread);
          ExpLockResource((__int64)Resource, v26);
          do
            v21 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v26, 1, 1);
          while ( !v21 );
          v24 = *(_DWORD *)(v21 + 8) & 3;
          *(_QWORD *)v21 = CurrentThread;
          v25 = v24 | 4u;
          *(_DWORD *)(v21 + 8) = v25;
          ExpUnlockResource(v25, (__int64)v26, v22, v23);
          goto LABEL_10;
        }
        goto LABEL_15;
      }
      v6 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v26, 1, 0);
      if ( v6 )
      {
        if ( *(struct _KTHREAD **)v6 == CurrentThread )
        {
          v16 = *(_DWORD *)(v6 + 8) & 3 ^ ((*(_DWORD *)(v6 + 8) & 0xFFFFFFFC) + 4);
          *(_DWORD *)(v6 + 8) = v16;
          v17 = v16 >> 2;
          KxReleaseQueuedSpinLock(v26);
          _enable();
          __incgsdword(0x6388u);
          __incgsdword(0x6324u);
          if ( !v4 )
            return 1;
          v15 = v17;
          v14 = 65617LL;
          goto LABEL_32;
        }
        *(_QWORD *)v6 = CurrentThread;
        *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 8) & 3 | 4;
        ActiveEntries = Resource->ActiveEntries;
        if ( ActiveEntries )
        {
          Resource->ActiveEntries = ActiveEntries + 1;
LABEL_9:
          KxReleaseQueuedSpinLock(v26);
          _enable();
          goto LABEL_10;
        }
LABEL_13:
        Resource->ActiveCount = 1;
        Resource->ActiveEntries = 1;
        goto LABEL_9;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                           + 4);
      KxReleaseQueuedSpinLock(v26);
      _enable();
      __incgsdword(0x6380u);
      __incgsdword(0x6324u);
      if ( !v4 )
        return 1;
      v14 = 65585LL;
      v15 = Resource->OwnerEntry.TableSize >> 2;
      goto LABEL_32;
    }
    EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)v26);
  }
  while ( !EmptyEntry );
  if ( Wait )
  {
    *EmptyEntry = CurrentThread;
    *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 3 | 4;
    ++Resource->NumberOfSharedWaiters;
    memset(v27, 0, 0x20uLL);
    HIDWORD(v27[1]) = 0;
    v27[3] = &v27[2];
    LOWORD(v27[1]) = 1;
    v27[2] = &v27[2];
    v27[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v27;
    BYTE2(v27[1]) = 6;
    ExpUnlockResource(v11, (__int64)v26, v12, v13);
    __incgsdword(0x638Cu);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource((__int64)Resource, &v27[1]);
    ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread);
LABEL_10:
    __incgsdword(0x6384u);
    __incgsdword(0x6324u);
    if ( !v4 )
      return 1;
    v15 = 1LL;
    v14 = 65601LL;
LABEL_32:
    PerfLogExecutiveResourceAcquire(v14, Resource, v15, Resource->ContentionCount);
    return 1;
  }
LABEL_15:
  KxReleaseQueuedSpinLock(v26);
  _enable();
  __incgsdword(0x6390u);
  return 0;
}
