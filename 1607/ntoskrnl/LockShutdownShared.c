/*
 * XREFs of LockShutdownShared @ 0x1404A1EFC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 LockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 0);
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
