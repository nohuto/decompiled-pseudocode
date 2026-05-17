/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x180093F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckByTypeResultListAndAuditAlarmByHandle()
{
  __int64 result; // rax

  result = 102LL;
  __asm { syscall; Low latency system call }
  return result;
}
