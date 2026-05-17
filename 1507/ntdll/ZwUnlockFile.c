/*
 * XREFs of ZwUnlockFile @ 0x1800953D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwUnlockFile()
{
  __int64 result; // rax

  result = 429LL;
  __asm { syscall; Low latency system call }
  return result;
}
