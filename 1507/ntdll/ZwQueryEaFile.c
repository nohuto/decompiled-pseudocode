/*
 * XREFs of ZwQueryEaFile @ 0x180094BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryEaFile()
{
  __int64 result; // rax

  result = 301LL;
  __asm { syscall; Low latency system call }
  return result;
}
