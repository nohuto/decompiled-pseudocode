/*
 * XREFs of TryLockShutdownShared @ 0x1405E6734
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1405E57D8 (CmpSyncNextBackupHive.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x1400209C4 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

char TryLockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&CmpShutdownLock) )
  {
    if ( v1 )
      *(_BYTE *)(v1 + 26) |= 1u;
    return 1;
  }
  else
  {
    if ( v1 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, v1);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0;
  }
}
