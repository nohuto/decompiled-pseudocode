/*
 * XREFs of ZwOpenObjectAuditAlarm @ 0x180094A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenObjectAuditAlarm()
{
  __int64 result; // rax

  result = 273LL;
  __asm { syscall; Low latency system call }
  return result;
}
