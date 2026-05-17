/*
 * XREFs of ZwLoadKey3 @ 0x180095490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLoadKey3()
{
  __int64 result; // rax

  result = 441LL;
  __asm { syscall; Low latency system call }
  return result;
}
