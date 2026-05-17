/*
 * XREFs of ZwOpenTransaction @ 0x180094AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenTransaction()
{
  __int64 result; // rax

  result = 283LL;
  __asm { syscall; Low latency system call }
  return result;
}
