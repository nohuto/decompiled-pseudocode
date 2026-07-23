/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x180095270
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  NTSTATUS result; // eax

  result = 407;
  __asm { syscall; Low latency system call }
  return result;
}
