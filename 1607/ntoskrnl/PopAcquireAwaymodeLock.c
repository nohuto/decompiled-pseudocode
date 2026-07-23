/*
 * XREFs of PopAcquireAwaymodeLock @ 0x1403D068C
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x14066A928 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  _BYTE *v2; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopAwaymodeLock, 0LL, 0);
  v2 = v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopAwaymodeLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopAwaymodeLock, v1, (ULONG_PTR)&PopAwaymodeLock);
  if ( v2 )
    v2[26] |= 1u;
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
