/*
 * XREFs of NtOpenKeyedEvent @ 0x1800949F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenKeyedEvent()
{
  __int64 result; // rax

  result = 271LL;
  __asm { syscall; Low latency system call }
  return result;
}
