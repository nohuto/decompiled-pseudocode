/*
 * XREFs of ZwFlushBuffersFileEx @ 0x180094670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFlushBuffersFileEx()
{
  __int64 result; // rax

  result = 215LL;
  __asm { syscall; Low latency system call }
  return result;
}
