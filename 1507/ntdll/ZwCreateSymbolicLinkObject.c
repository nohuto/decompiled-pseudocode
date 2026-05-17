/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x180094420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateSymbolicLinkObject()
{
  __int64 result; // rax

  result = 178LL;
  __asm { syscall; Low latency system call }
  return result;
}
