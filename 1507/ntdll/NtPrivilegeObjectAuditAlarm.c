/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x180094B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtPrivilegeObjectAuditAlarm()
{
  __int64 result; // rax

  result = 291LL;
  __asm { syscall; Low latency system call }
  return result;
}
