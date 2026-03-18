/*
 * XREFs of PopAcquireUmpoPushLock @ 0x1404E6394
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x1404FFA1C (PopUmpoProcessMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

signed __int64 __fastcall PopAcquireUmpoPushLock(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdi
  __int64 v6; // r9
  signed __int64 result; // rax
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    result = KeAbPreAcquire((ULONG_PTR)&PopUmpoPushLock, 0LL, 0LL, a4);
    v5 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopUmpoPushLock, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(&PopUmpoPushLock, result, (ULONG_PTR)&PopUmpoPushLock, v8);
  }
  else
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&PopUmpoPushLock, 0LL, 0LL, a4);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, 17LL, 0LL);
    if ( result )
      result = ExfAcquirePushLockSharedEx(&PopUmpoPushLock, v5, (ULONG_PTR)&PopUmpoPushLock, v6);
  }
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  return result;
}
