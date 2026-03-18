/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x1400A4BB0
 * Callers:
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcPinMappedData @ 0x14047A470 (CcPinMappedData.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1406C9250 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x1406C92C8 (VerifierExAcquireSharedStarveExclusiveNoReboot.c)
 * Callees:
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x14007F400 (ExpWaitForResource.c)
 *     ExpFindEmptyEntry @ 0x1400CF32C (ExpFindEmptyEntry.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140210238 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402106F4 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  KSPIN_LOCK *p_SpinLock; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  char v7; // al
  __int64 v8; // rdx
  ULONG v9; // eax
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // esi
  ULONG ActiveEntries; // eax
  __int64 EmptyEntry; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  volatile signed __int64 *v21[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[5]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int8 v23; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6364u);
  p_SpinLock = &Resource->SpinLock;
  CurrentThread = KeGetCurrentThread();
  v21[0] = 0LL;
  v23 = 2;
  v21[1] = (volatile signed __int64 *)p_SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(v21, p_SpinLock, &v23);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v21);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(v21, v8, &v23);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v23);
  }
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v9 = Resource->OwnerEntry.TableSize & 3;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->ActiveEntries = 1;
        Resource->OwnerEntry.TableSize = v9 | 4;
        Resource->ActiveCount = 1;
        KxReleaseQueuedSpinLock(v21);
        _enable();
        __incgsdword(0x636Cu);
        __incgsdword(0x6324u);
        if ( v4 )
          goto LABEL_30;
        return 1;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      v11 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v21, 1, 0);
      if ( v11 )
      {
        if ( *(struct _KTHREAD **)v11 != CurrentThread )
        {
          *(_QWORD *)v11 = CurrentThread;
          *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 8) & 3 | 4;
          ActiveEntries = Resource->ActiveEntries;
          if ( ActiveEntries )
          {
            Resource->ActiveEntries = ActiveEntries + 1;
          }
          else
          {
            Resource->ActiveEntries = 1;
            Resource->ActiveCount = 1;
          }
          KxReleaseQueuedSpinLock(v21);
          _enable();
          goto LABEL_17;
        }
        v12 = *(_DWORD *)(v11 + 8) & 3 ^ ((*(_DWORD *)(v11 + 8) & 0xFFFFFFFC) + 4);
        *(_DWORD *)(v11 + 8) = v12;
        v13 = v12 >> 2;
        KxReleaseQueuedSpinLock(v21);
        _enable();
        __incgsdword(0x6370u);
        __incgsdword(0x6324u);
        if ( v4 )
        {
          v19 = v13;
          v20 = 65617LL;
          goto LABEL_31;
        }
        return 1;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                           + 4);
      KxReleaseQueuedSpinLock(v21);
      _enable();
      __incgsdword(0x6368u);
      __incgsdword(0x6324u);
      if ( v4 )
      {
        v20 = 65585LL;
        v19 = Resource->OwnerEntry.TableSize >> 2;
        goto LABEL_31;
      }
      return 1;
    }
    EmptyEntry = ExpFindEmptyEntry(Resource, v21);
  }
  while ( !EmptyEntry );
  if ( Wait )
  {
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 3 | 4;
    ++Resource->NumberOfSharedWaiters;
    memset(v22, 0, 0x20uLL);
    LOWORD(v22[1]) = 1;
    v22[3] = &v22[2];
    BYTE2(v22[1]) = 6;
    v22[2] = &v22[2];
    v22[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v22;
    HIDWORD(v22[1]) = 0;
    ExpUnlockResource(v16, (__int64)v21, v17, v18);
    __incgsdword(0x6374u);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource((__int64)Resource, &v22[1]);
    ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread);
LABEL_17:
    __incgsdword(0x636Cu);
    __incgsdword(0x6324u);
    if ( v4 )
    {
LABEL_30:
      v20 = 65601LL;
      v19 = 1LL;
LABEL_31:
      PerfLogExecutiveResourceAcquire(v20, Resource, v19, Resource->ContentionCount);
    }
    return 1;
  }
  KxReleaseQueuedSpinLock(v21);
  _enable();
  __incgsdword(0x6378u);
  return 0;
}
