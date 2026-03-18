/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x140263AD8
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpFindCurrentThread @ 0x1400D6794 (ExpFindCurrentThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

char __fastcall ExTryConvertSharedToExclusiveLite(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v2; // al
  _QWORD *v3; // rdx
  OWNER_ENTRY *v4; // rax
  char v5; // bl
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v8; // [rsp+30h] [rbp-20h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+38h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+8h]
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF

  v11 = a1;
  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &CmpRegistryLock.SpinLock;
  v8 = 0LL;
  LOBYTE(v11) = 2;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v2 = KiFastAcquireQueuedSpinLockInstrumented(
           (__int64)&v8,
           (volatile __int64 *)&CmpRegistryLock.SpinLock,
           (unsigned __int8 *)&v11);
  }
  else
  {
    v2 = 0;
    v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CmpRegistryLock.SpinLock, (__int64)&v8);
    if ( v3 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&v8, v3, (unsigned __int8 *)&v11);
      v2 = 1;
    }
  }
  if ( v2 )
  {
    _disable();
    __writecr8((unsigned __int8)v11);
  }
  if ( CmpRegistryLock.ActiveEntries == 1 )
  {
    v4 = (OWNER_ENTRY *)ExpFindCurrentThread((__int64)&CmpRegistryLock, (__int64)CurrentThread, (__int64)&v8, 0, 0);
    CmpRegistryLock.Flag |= 0x80u;
    if ( v4 != &CmpRegistryLock.OwnerEntry )
    {
      CmpRegistryLock.OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
      CmpRegistryLock.OwnerEntry.TableSize = *(_BYTE *)&CmpRegistryLock.OwnerEntry.0 & 3 | 4;
      v4->TableSize &= 3u;
      v4->OwnerThread = 0LL;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v8);
    v6 = v8;
    if ( !v8 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)p_SpinLock,
                                         0LL,
                                         (signed __int64)&v8) == &v8 )
        goto LABEL_18;
      v6 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v8);
    }
    v8 = 0LL;
    _InterlockedXor64(v6 + 1, 1uLL);
    goto LABEL_18;
  }
  KiReleaseQueuedSpinLockInstrumented(&v8, retaddr);
LABEL_18:
  _enable();
  return v5;
}
