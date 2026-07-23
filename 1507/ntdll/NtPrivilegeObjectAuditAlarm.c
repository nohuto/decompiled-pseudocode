/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x180094B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  NTSTATUS result; // eax

  result = 291;
  __asm { syscall; Low latency system call }
  return result;
}
