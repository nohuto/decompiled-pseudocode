/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x140052F60
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcPinMappedData @ 0x14049D270 (CcPinMappedData.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x14074BE50 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x14074BEC8 (VerifierExAcquireSharedStarveExclusiveNoReboot.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 *     ExpFindEmptyEntry @ 0x1400D6298 (ExpFindEmptyEntry.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x1400D6794 (ExpFindCurrentThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14025F5A8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14025FA64 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  KSPIN_LOCK *p_SpinLock; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  char v7; // al
  __int64 v8; // rdx
  ULONG v9; // eax
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // esi
  __int64 v15; // rax
  ULONG ActiveEntries; // eax
  __int64 v17; // rax
  __int64 EmptyEntry; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  KSPIN_LOCK *v25; // [rsp+38h] [rbp-38h]
  _QWORD v26[5]; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v28; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6364u);
  p_SpinLock = &Resource->SpinLock;
  CurrentThread = KeGetCurrentThread();
  v24 = 0LL;
  v28 = 2;
  v25 = p_SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&v24, p_SpinLock, &v28);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v24);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(&v24, v8, &v28);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v28);
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
        }
        else
        {
          _m_prefetchw(&v24);
          v10 = v24;
          if ( !v24 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, (signed __int64)&v24) == &v24 )
              goto LABEL_10;
            v10 = KxWaitForLockChainValid(&v24);
          }
          v24 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
        }
LABEL_10:
        _enable();
        __incgsdword(0x636Cu);
        __incgsdword(0x6324u);
        if ( v4 )
          goto LABEL_60;
        return 1;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      v12 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&v24, 1, 0);
      if ( v12 )
      {
        if ( *(struct _KTHREAD **)v12 == CurrentThread )
        {
          v13 = *(_DWORD *)(v12 + 8) & 3 ^ ((*(_DWORD *)(v12 + 8) & 0xFFFFFFFC) + 4);
          *(_DWORD *)(v12 + 8) = v13;
          v14 = v13 >> 2;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
          }
          else
          {
            _m_prefetchw(&v24);
            v15 = v24;
            if ( !v24 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, (signed __int64)&v24) == &v24 )
                goto LABEL_18;
              v15 = KxWaitForLockChainValid(&v24);
            }
            v24 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
          }
LABEL_18:
          _enable();
          __incgsdword(0x6370u);
          __incgsdword(0x6324u);
          if ( v4 )
          {
            v22 = v14;
            v23 = 65617LL;
            goto LABEL_61;
          }
          return 1;
        }
        *(_QWORD *)v12 = CurrentThread;
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(v12 + 8) & 3 | 4;
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
          goto LABEL_27;
        }
        _m_prefetchw(&v24);
        v17 = v24;
        if ( !v24 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, (signed __int64)&v24) == &v24 )
          {
LABEL_27:
            _enable();
            goto LABEL_28;
          }
          v17 = KxWaitForLockChainValid(&v24);
        }
        v24 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
        goto LABEL_27;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                           + 4);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
        goto LABEL_54;
      }
      _m_prefetchw(&v24);
      v21 = v24;
      if ( !v24 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, (signed __int64)&v24) == &v24 )
          goto LABEL_54;
        v21 = KxWaitForLockChainValid(&v24);
      }
      v24 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
LABEL_54:
      _enable();
      __incgsdword(0x6368u);
      __incgsdword(0x6324u);
      if ( v4 )
      {
        v23 = 65585LL;
        v22 = Resource->OwnerEntry.TableSize >> 2;
        goto LABEL_61;
      }
      return 1;
    }
    EmptyEntry = ExpFindEmptyEntry(Resource, &v24);
  }
  while ( !EmptyEntry );
  if ( Wait )
  {
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 3 | 4;
    ++Resource->NumberOfSharedWaiters;
    memset(v26, 0, 0x20uLL);
    LOWORD(v26[1]) = 1;
    v26[3] = &v26[2];
    BYTE2(v26[1]) = 6;
    v26[2] = &v26[2];
    v26[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v26;
    HIDWORD(v26[1]) = 0;
    ExpUnlockResource(v19, &v24);
    __incgsdword(0x6374u);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource(Resource, &v26[1]);
    ExpBoostIoAfterAcquire(Resource, CurrentThread);
LABEL_28:
    __incgsdword(0x636Cu);
    __incgsdword(0x6324u);
    if ( v4 )
    {
LABEL_60:
      v23 = 65601LL;
      v22 = 1LL;
LABEL_61:
      PerfLogExecutiveResourceAcquire(v23, Resource, v22, Resource->ContentionCount);
    }
    return 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
    goto LABEL_43;
  }
  _m_prefetchw(&v24);
  v20 = v24;
  if ( v24 )
    goto LABEL_46;
  if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, (signed __int64)&v24) != &v24 )
  {
    v20 = KxWaitForLockChainValid(&v24);
LABEL_46:
    v24 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
  }
LABEL_43:
  _enable();
  __incgsdword(0x6378u);
  return 0;
}
