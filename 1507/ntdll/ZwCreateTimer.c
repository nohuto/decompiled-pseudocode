/*
 * XREFs of ZwCreateTimer @ 0x180094440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateTimer()
{
  __int64 result; // rax

  result = 180LL;
  __asm { syscall; Low latency system call }
  return result;
}
