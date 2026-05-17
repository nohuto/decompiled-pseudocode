/*
 * XREFs of ZwLoadKey2 @ 0x180094870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLoadKey2()
{
  __int64 result; // rax

  result = 247LL;
  __asm { syscall; Low latency system call }
  return result;
}
