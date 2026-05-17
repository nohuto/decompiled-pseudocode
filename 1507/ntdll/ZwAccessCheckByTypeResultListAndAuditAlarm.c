/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarm @ 0x180093F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckByTypeResultListAndAuditAlarm()
{
  __int64 result; // rax

  result = 101LL;
  __asm { syscall; Low latency system call }
  return result;
}
