/*
 * XREFs of ZwLoadDriver @ 0x180094850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLoadDriver()
{
  __int64 result; // rax

  result = 245LL;
  __asm { syscall; Low latency system call }
  return result;
}
