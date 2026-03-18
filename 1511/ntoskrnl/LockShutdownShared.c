/*
 * XREFs of LockShutdownShared @ 0x1403BDB38
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 LockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&CmpShutdownLock, v1, (ULONG_PTR)&CmpShutdownLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
