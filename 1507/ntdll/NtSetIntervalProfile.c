/*
 * XREFs of NtSetIntervalProfile @ 0x180095140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetIntervalProfile()
{
  __int64 result; // rax

  result = 388LL;
  __asm { syscall; Low latency system call }
  return result;
}
