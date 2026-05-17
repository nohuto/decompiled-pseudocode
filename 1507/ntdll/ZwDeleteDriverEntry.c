/*
 * XREFs of ZwDeleteDriverEntry @ 0x180094530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwDeleteDriverEntry()
{
  __int64 result; // rax

  result = 195LL;
  __asm { syscall; Low latency system call }
  return result;
}
