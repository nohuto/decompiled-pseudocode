/*
 * XREFs of ZwCreateJobObject @ 0x180094310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateJobObject()
{
  __int64 result; // rax

  result = 161LL;
  __asm { syscall; Low latency system call }
  return result;
}
