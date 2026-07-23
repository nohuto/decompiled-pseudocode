/*
 * XREFs of ZwPrivilegedServiceAuditAlarm @ 0x180094B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  NTSTATUS result; // eax

  result = 292;
  __asm { syscall; Low latency system call }
  return result;
}
