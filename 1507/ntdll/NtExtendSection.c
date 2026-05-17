/*
 * XREFs of NtExtendSection @ 0x180094630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtExtendSection()
{
  __int64 result; // rax

  result = 211LL;
  __asm { syscall; Low latency system call }
  return result;
}
