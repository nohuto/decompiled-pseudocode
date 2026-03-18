/*
 * XREFs of PopAcquireAwaymodeLock @ 0x1403A59A4
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1406323F0 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&PopAwaymodeLock, 0LL, 0LL);
  v2 = v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopAwaymodeLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopAwaymodeLock, v1, (ULONG_PTR)&PopAwaymodeLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
