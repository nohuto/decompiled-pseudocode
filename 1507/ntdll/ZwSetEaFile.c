/*
 * XREFs of ZwSetEaFile @ 0x180095050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetEaFile()
{
  __int64 result; // rax

  result = 373LL;
  __asm { syscall; Low latency system call }
  return result;
}
