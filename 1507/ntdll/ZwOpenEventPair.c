/*
 * XREFs of ZwOpenEventPair @ 0x180094990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenEventPair()
{
  __int64 result; // rax

  result = 265LL;
  __asm { syscall; Low latency system call }
  return result;
}
