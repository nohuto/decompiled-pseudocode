/*
 * XREFs of NtCreateTransaction @ 0x180094480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateTransaction()
{
  __int64 result; // rax

  result = 184LL;
  __asm { syscall; Low latency system call }
  return result;
}
