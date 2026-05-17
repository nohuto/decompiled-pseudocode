/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x180095270
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     <none>
 */

__int64 NtSetWnfProcessNotificationEvent()
{
  __int64 result; // rax

  result = 407LL;
  __asm { syscall; Low latency system call }
  return result;
}
