/*
 * XREFs of ZwFilterTokenEx @ 0x180094660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFilterTokenEx()
{
  __int64 result; // rax

  result = 214LL;
  __asm { syscall; Low latency system call }
  return result;
}
