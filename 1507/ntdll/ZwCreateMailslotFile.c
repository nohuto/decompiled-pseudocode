/*
 * XREFs of ZwCreateMailslotFile @ 0x180094360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateMailslotFile()
{
  __int64 result; // rax

  result = 166LL;
  __asm { syscall; Low latency system call }
  return result;
}
