/*
 * XREFs of ZwCreateJobSet @ 0x180094320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateJobSet()
{
  __int64 result; // rax

  result = 162LL;
  __asm { syscall; Low latency system call }
  return result;
}
