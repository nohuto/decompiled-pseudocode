/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140455C48
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140449588 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdi
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    result = KeAbPreAcquire((ULONG_PTR)&PopUmpoPushLock, 0LL, 0LL);
    v2 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopUmpoPushLock, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(&PopUmpoPushLock, result, (ULONG_PTR)&PopUmpoPushLock);
  }
  else
  {
    v2 = KeAbPreAcquire((ULONG_PTR)&PopUmpoPushLock, 0LL, 0LL);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, 17LL, 0LL);
    if ( result )
      result = ExfAcquirePushLockSharedEx(&PopUmpoPushLock, v2, (ULONG_PTR)&PopUmpoPushLock);
  }
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
