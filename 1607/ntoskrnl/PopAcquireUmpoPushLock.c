/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140503550
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x1403F69E8 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

_BYTE *__fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdi
  _BYTE *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopUmpoPushLock, 0LL, 0);
    v2 = (__int64)result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopUmpoPushLock, 0LL) )
      result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&PopUmpoPushLock, result, (ULONG_PTR)&PopUmpoPushLock);
  }
  else
  {
    v2 = KeAbPreAcquire((ULONG_PTR)&PopUmpoPushLock, 0LL, 0);
    result = (_BYTE *)_InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, 17LL, 0LL);
    if ( result )
      result = (_BYTE *)ExfAcquirePushLockSharedEx(&PopUmpoPushLock, v2, (ULONG_PTR)&PopUmpoPushLock);
  }
  if ( v2 )
  {
    result = *(_BYTE **)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
