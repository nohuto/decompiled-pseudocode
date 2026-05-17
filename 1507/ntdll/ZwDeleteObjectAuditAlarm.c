/*
 * XREFs of ZwDeleteObjectAuditAlarm @ 0x180094560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwDeleteObjectAuditAlarm()
{
  __int64 result; // rax

  result = 198LL;
  __asm { syscall; Low latency system call }
  return result;
}
