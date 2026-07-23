/*
 * XREFs of PspAcquirePushLockShared @ 0x14020F980
 * Callers:
 *     PspBeginServerSiloShutdown @ 0x14067E34C (PspBeginServerSiloShutdown.c)
 *     PspNotifyServerSiloCreation @ 0x1406812E4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406813C0 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 PspAcquirePushLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&PspSiloMonitorLock, v1, (ULONG_PTR)&PspSiloMonitorLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
