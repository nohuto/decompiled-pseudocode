/*
 * XREFs of NtGetNotificationResourceManager @ 0x1800947B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGetNotificationResourceManager()
{
  __int64 result; // rax

  result = 235LL;
  __asm { syscall; Low latency system call }
  return result;
}
