/*
 * XREFs of ZwPrivilegedServiceAuditAlarm @ 0x180094B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegedServiceAuditAlarm()
{
  __int64 result; // rax

  result = 292LL;
  __asm { syscall; Low latency system call }
  return result;
}
