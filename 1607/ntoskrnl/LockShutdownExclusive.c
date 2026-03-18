/*
 * XREFs of LockShutdownExclusive @ 0x140603EA0
 * Callers:
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *LockShutdownExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpShutdownLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&CmpShutdownLock, result, (ULONG_PTR)&CmpShutdownLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
