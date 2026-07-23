/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1800A83F0
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x180051338 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  NTSTATUS result; // eax

  result = 410;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
