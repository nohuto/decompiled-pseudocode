/*
 * XREFs of ZwReadFileScatter @ 0x180093BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwReadFileScatter()
{
  __int64 result; // rax

  result = 46LL;
  __asm { syscall; Low latency system call }
  return result;
}
