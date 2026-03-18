/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14012EDB8
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140263AA0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x14074BEF8 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x14074BF70 (VerifierExAcquireSharedWaitForExclusiveNoReboot.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
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

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v3; // di
  KSPIN_LOCK *p_SpinLock; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  char v7; // al
  _QWORD *v8; // rdx
  ULONG v9; // eax
  volatile signed __int64 *v10; // rax
  bool v11; // zf
  _QWORD *v13; // rax
  ULONG ActiveEntries; // eax
  _QWORD *EmptyEntry; // rax
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // esi
  unsigned int v21; // esi
  volatile signed __int64 *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // [rsp+30h] [rbp-40h] BYREF
  KSPIN_LOCK *v29; // [rsp+38h] [rbp-38h]
  _QWORD v30[5]; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v32; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  p_SpinLock = &Resource->SpinLock;
  __incgsdword(0x637Cu);
  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  v32 = 2;
  v29 = p_SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&v28, p_SpinLock, &v32);
  }
  else
  {
    v7 = 0;
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v28);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&v28, v8, &v32);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v32);
  }
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v9 = Resource->OwnerEntry.TableSize & 3;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->OwnerEntry.TableSize = v9 | 4;
        goto LABEL_8;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
      {
        if ( Wait )
        {
          ++Resource->NumberOfSharedWaiters;
          memset(v30, 0, 0x20uLL);
          LOWORD(v30[1]) = 1;
          v30[3] = &v30[2];
          BYTE2(v30[1]) = 6;
          v30[2] = &v30[2];
          v30[0] = Resource->SharedWaiters;
          Resource->SharedWaiters = v30;
          HIDWORD(v30[1]) = 0;
          ExpUnlockResource(v23, &v28);
          __incgsdword(0x638Cu);
          if ( v3 )
            PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
          ExpWaitForResource((__int64)Resource, (volatile signed __int32 *)&v30[1]);
          ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread);
          ExpLockResource((__int64)Resource, &v28);
          do
            v24 = ExpFindCurrentThread((__int64)Resource, (__int64)CurrentThread, (__int64)&v28, 1, 1);
          while ( !v24 );
          v25 = v24[1] & 3;
          *v24 = CurrentThread;
          v26 = v25 | 4u;
          *((_DWORD *)v24 + 2) = v26;
          ExpUnlockResource(v26, &v28);
          goto LABEL_13;
        }
        goto LABEL_52;
      }
      v13 = ExpFindCurrentThread((__int64)Resource, (__int64)CurrentThread, (__int64)&v28, 1, 0);
      if ( v13 )
      {
        if ( (struct _KTHREAD *)*v13 != CurrentThread )
        {
          *v13 = CurrentThread;
          *((_DWORD *)v13 + 2) = v13[1] & 3 | 4;
          ActiveEntries = Resource->ActiveEntries;
          if ( ActiveEntries )
          {
            Resource->ActiveEntries = ActiveEntries + 1;
LABEL_9:
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v28, retaddr);
              goto LABEL_12;
            }
            v10 = v28;
            v11 = v28 == 0LL;
            _m_prefetchw(&v28);
            if ( v11 )
            {
              if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v29,
                                                 0LL,
                                                 (signed __int64)&v28) == &v28 )
              {
LABEL_12:
                _enable();
                goto LABEL_13;
              }
              v10 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v28);
            }
            v28 = 0LL;
            _InterlockedXor64(v10 + 1, 1uLL);
            goto LABEL_12;
          }
LABEL_8:
          Resource->ActiveCount = 1;
          Resource->ActiveEntries = 1;
          goto LABEL_9;
        }
        v20 = v13[1] & 3 ^ ((v13[1] & 0xFFFFFFFC) + 4);
        *((_DWORD *)v13 + 2) = v20;
        v21 = v20 >> 2;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v28, retaddr);
LABEL_44:
          _enable();
          __incgsdword(0x6388u);
          __incgsdword(0x6324u);
          if ( !v3 )
            return 1;
          v19 = v21;
          v18 = 65617LL;
          goto LABEL_61;
        }
        _m_prefetchw(&v28);
        v22 = v28;
        if ( !v28 )
        {
          if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)v29,
                                             0LL,
                                             (signed __int64)&v28) == &v28 )
            goto LABEL_44;
          v22 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v28);
        }
        v28 = 0LL;
        _InterlockedXor64(v22 + 1, 1uLL);
        goto LABEL_44;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                           + 4);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v28, retaddr);
LABEL_36:
        _enable();
        __incgsdword(0x6380u);
        __incgsdword(0x6324u);
        if ( !v3 )
          return 1;
        v18 = 65585LL;
        v19 = Resource->OwnerEntry.TableSize >> 2;
        goto LABEL_61;
      }
      _m_prefetchw(&v28);
      v17 = v28;
      if ( !v28 )
      {
        if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v29,
                                           0LL,
                                           (signed __int64)&v28) == &v28 )
          goto LABEL_36;
        v17 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v28);
      }
      v28 = 0LL;
      _InterlockedXor64(v17 + 1, 1uLL);
      goto LABEL_36;
    }
    EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)&v28);
  }
  while ( !EmptyEntry );
  if ( Wait )
  {
    *EmptyEntry = CurrentThread;
    *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 3 | 4;
    ++Resource->NumberOfSharedWaiters;
    memset(v30, 0, 0x20uLL);
    LOWORD(v30[1]) = 1;
    v30[3] = &v30[2];
    BYTE2(v30[1]) = 6;
    v30[2] = &v30[2];
    v30[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v30;
    HIDWORD(v30[1]) = 0;
    ExpUnlockResource(v16, &v28);
    __incgsdword(0x638Cu);
    if ( v3 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource((__int64)Resource, (volatile signed __int32 *)&v30[1]);
    ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread);
LABEL_13:
    __incgsdword(0x6384u);
    __incgsdword(0x6324u);
    if ( !v3 )
      return 1;
    v19 = 1LL;
    v18 = 65601LL;
LABEL_61:
    PerfLogExecutiveResourceAcquire(v18, Resource, v19, Resource->ContentionCount);
    return 1;
  }
LABEL_52:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v28);
    v27 = v28;
    if ( !v28 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)v29,
                                         0LL,
                                         (signed __int64)&v28) == &v28 )
        goto LABEL_58;
      v27 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v28);
    }
    v28 = 0LL;
    _InterlockedXor64(v27 + 1, 1uLL);
    goto LABEL_58;
  }
  KiReleaseQueuedSpinLockInstrumented(&v28, retaddr);
LABEL_58:
  _enable();
  __incgsdword(0x6390u);
  return 0;
}
