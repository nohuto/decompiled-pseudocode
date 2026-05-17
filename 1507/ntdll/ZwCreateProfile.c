/*
 * XREFs of ZwCreateProfile @ 0x1800943E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateProfile()
{
  __int64 result; // rax

  result = 174LL;
  __asm { syscall; Low latency system call }
  return result;
}
