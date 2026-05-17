/*
 * XREFs of NtCompareObjects @ 0x180094250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCompareObjects()
{
  __int64 result; // rax

  result = 149LL;
  __asm { syscall; Low latency system call }
  return result;
}
