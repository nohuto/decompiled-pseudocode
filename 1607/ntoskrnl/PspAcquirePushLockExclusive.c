/*
 * XREFs of PspAcquirePushLockExclusive @ 0x14013E708
 * Callers:
 *     PsStartSiloMonitor @ 0x14055FD28 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *PspAcquirePushLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, result, (ULONG_PTR)&PspSiloMonitorLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
