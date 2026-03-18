/*
 * XREFs of LockShutdownExclusive @ 0x1405E66D4
 * Callers:
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpShutdownLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpShutdownLock, result, (ULONG_PTR)&CmpShutdownLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
