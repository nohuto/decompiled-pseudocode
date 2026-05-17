/*
 * XREFs of ZwOpenKeyTransacted @ 0x1800949D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenKeyTransacted()
{
  __int64 result; // rax

  result = 269LL;
  __asm { syscall; Low latency system call }
  return result;
}
