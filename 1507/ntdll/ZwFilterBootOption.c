/*
 * XREFs of ZwFilterBootOption @ 0x180094640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFilterBootOption()
{
  __int64 result; // rax

  result = 212LL;
  __asm { syscall; Low latency system call }
  return result;
}
