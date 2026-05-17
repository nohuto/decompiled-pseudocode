/*
 * XREFs of ZwCreateProfileEx @ 0x1800943F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateProfileEx()
{
  __int64 result; // rax

  result = 175LL;
  __asm { syscall; Low latency system call }
  return result;
}
