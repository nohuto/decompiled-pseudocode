/*
 * XREFs of PopAcquireAwaymodeLock @ 0x1403EF17C
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1406B0A18 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall PopAcquireAwaymodeLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopAwaymodeLock, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopAwaymodeLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopAwaymodeLock, v5, (ULONG_PTR)&PopAwaymodeLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
