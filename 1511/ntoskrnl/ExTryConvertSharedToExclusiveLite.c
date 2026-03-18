/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x140213DB0
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 */

char ExTryConvertSharedToExclusiveLite()
{
  struct _KTHREAD *CurrentThread; // rdi
  char v1; // bl
  OWNER_ENTRY *v2; // rcx
  volatile signed __int64 *v4[5]; // [rsp+30h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeFastAcquireInStackQueuedSpinLockAndRaise((volatile __int64 *)&CmpRegistryLock.SpinLock, v4);
  v1 = 1;
  if ( CmpRegistryLock.ActiveEntries == 1 )
  {
    v2 = (OWNER_ENTRY *)ExpFindCurrentThread((__int64)&CmpRegistryLock, (__int64)CurrentThread, (__int64)v4, 0, 0);
    CmpRegistryLock.Flag |= 0x80u;
    if ( v2 != &CmpRegistryLock.OwnerEntry )
    {
      CmpRegistryLock.OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
      CmpRegistryLock.OwnerEntry.TableSize = *(_BYTE *)&CmpRegistryLock.OwnerEntry.0 & 3 | 4;
      v2->OwnerThread = 0LL;
      v2->TableSize &= 3u;
    }
  }
  else
  {
    v1 = 0;
  }
  KxReleaseQueuedSpinLock(v4);
  _enable();
  return v1;
}
