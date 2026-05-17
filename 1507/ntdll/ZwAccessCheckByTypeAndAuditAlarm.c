/*
 * XREFs of ZwAccessCheckByTypeAndAuditAlarm @ 0x180093E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckByTypeAndAuditAlarm()
{
  __int64 result; // rax

  result = 89LL;
  __asm { syscall; Low latency system call }
  return result;
}
