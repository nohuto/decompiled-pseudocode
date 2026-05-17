/*
 * XREFs of ZwAccessCheckAndAuditAlarm @ 0x180093B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckAndAuditAlarm()
{
  __int64 result; // rax

  result = 41LL;
  __asm { syscall; Low latency system call }
  return result;
}
