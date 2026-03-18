/*
 * XREFs of PspAcquirePushLockShared @ 0x14020FB54
 * Callers:
 *     PspBeginServerSiloShutdown @ 0x14067E268 (PspBeginServerSiloShutdown.c)
 *     PspNotifyServerSiloCreation @ 0x140681200 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406812DC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
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
