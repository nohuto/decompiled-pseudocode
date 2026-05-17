/*
 * XREFs of NtCreateProcess @ 0x1800943D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateProcess()
{
  __int64 result; // rax

  result = 173LL;
  __asm { syscall; Low latency system call }
  return result;
}
