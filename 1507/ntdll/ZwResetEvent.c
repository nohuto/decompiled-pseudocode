/*
 * XREFs of ZwResetEvent @ 0x180094EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwResetEvent()
{
  __int64 result; // rax

  result = 350LL;
  __asm { syscall; Low latency system call }
  return result;
}
