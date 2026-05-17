/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x180093CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCloseObjectAuditAlarm()
{
  __int64 result; // rax

  result = 59LL;
  __asm { syscall; Low latency system call }
  return result;
}
