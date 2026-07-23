/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x140132C38
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14022D768 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExpLockResource @ 0x14005D6E0 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindEmptyEntry @ 0x140096648 (ExpFindEmptyEntry.c)
 *     ExpFindCurrentThread @ 0x1400968C0 (ExpFindCurrentThread.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140227E70 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14022832C (PerfLogExecutiveResourceWait.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  ULONG ActiveEntries; // eax
  ULONG v10; // eax
  _QWORD *EmptyEntry; // rax
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // esi
  unsigned int v19; // esi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _BYTE v22[24]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v23[5]; // [rsp+48h] [rbp-28h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63FCu);
  CurrentThread = KeGetCurrentThread();
  EXP_LOCK_RESOURCE(Resource, v22);
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v10 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->OwnerEntry.TableSize = v10 | 8;
        goto LABEL_13;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
      {
        if ( Wait )
        {
          ++Resource->NumberOfSharedWaiters;
          memset(v23, 0, 0x20uLL);
          HIDWORD(v23[1]) = 0;
          v23[3] = &v23[2];
          LOWORD(v23[1]) = 1;
          v23[2] = &v23[2];
          v23[0] = Resource->SharedWaiters;
          Resource->SharedWaiters = v23;
          BYTE2(v23[1]) = 6;
          ExpUnlockResource(v20, (__int64)v22);
          __incgsdword(0x640Cu);
          if ( v4 )
            PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
          ExpWaitForResource((__int64)Resource, &v23[1]);
          ExpLockResource((__int64)Resource, (__int64)v22);
          do
            v21 = ExpFindCurrentThread((__int64)Resource, (__int64)CurrentThread, (__int64)v22, 1, 1);
          while ( !v21 );
          v13 = v21[1] & 7;
          *v21 = CurrentThread;
          v14 = v13 | 8u;
          *((_DWORD *)v21 + 2) = v14;
          ExpUnlockResource(v14, (__int64)v22);
          goto LABEL_22;
        }
        goto LABEL_15;
      }
      v7 = ExpFindCurrentThread((__int64)Resource, (__int64)CurrentThread, (__int64)v22, 1, 0);
      v6 = v7;
      if ( v7 )
      {
        if ( (struct _KTHREAD *)*v7 == CurrentThread )
        {
          v18 = v7[1] & 7 ^ ((v7[1] & 0xFFFFFFF8) + 8);
          *((_DWORD *)v7 + 2) = v18;
          v19 = v18 >> 3;
          EXP_UNLOCK_RESOURCE(v7, v22);
          __incgsdword(0x6408u);
          __incgsdword(0x63A4u);
          if ( !v4 )
            return 1;
          v17 = v19;
          v16 = 65617LL;
          goto LABEL_33;
        }
        *v7 = CurrentThread;
        *((_DWORD *)v7 + 2) = v7[1] & 7 | 8;
        ActiveEntries = Resource->ActiveEntries;
        if ( ActiveEntries )
        {
          Resource->ActiveEntries = ActiveEntries + 1;
LABEL_9:
          EXP_UNLOCK_RESOURCE(v6, v22);
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
      v15 = Resource->OwnerEntry.TableSize & 7 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v15;
      EXP_UNLOCK_RESOURCE(v15, v22);
      __incgsdword(0x6400u);
      __incgsdword(0x63A4u);
      if ( !v4 )
        return 1;
      v16 = 65585LL;
      v17 = Resource->OwnerEntry.TableSize >> 3;
      goto LABEL_33;
    }
    EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)v22);
    v6 = EmptyEntry;
  }
  while ( !EmptyEntry );
  if ( Wait )
  {
    *EmptyEntry = CurrentThread;
    *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
    ++Resource->NumberOfSharedWaiters;
    memset(v23, 0, 0x20uLL);
    HIDWORD(v23[1]) = 0;
    v23[3] = &v23[2];
    LOWORD(v23[1]) = 1;
    v23[2] = &v23[2];
    v23[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v23;
    BYTE2(v23[1]) = 6;
    ExpUnlockResource(v12, (__int64)v22);
    __incgsdword(0x640Cu);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource((__int64)Resource, &v23[1]);
LABEL_22:
    ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread);
LABEL_10:
    __incgsdword(0x6404u);
    __incgsdword(0x63A4u);
    if ( !v4 )
      return 1;
    v17 = 1LL;
    v16 = 65601LL;
LABEL_33:
    PerfLogExecutiveResourceAcquire(v16, Resource, v17, Resource->ContentionCount);
    return 1;
  }
LABEL_15:
  EXP_UNLOCK_RESOURCE(v6, v22);
  __incgsdword(0x6410u);
  return 0;
}
