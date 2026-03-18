/*
 * XREFs of TryLockShutdownShared @ 0x140603F00
 * Callers:
 *     CmpSyncNextBackupHive @ 0x140604D28 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C7C18 (ExfTryAcquirePushLockShared.c)
 */

char TryLockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rbx
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1);
  v2 = 0;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return v2;
}
