/*
 * XREFs of ZwLockFile @ 0x180094890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLockFile()
{
  __int64 result; // rax

  result = 249LL;
  __asm { syscall; Low latency system call }
  return result;
}
