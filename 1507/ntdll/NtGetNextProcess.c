/*
 * XREFs of NtGetNextProcess @ 0x180094780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGetNextProcess()
{
  __int64 result; // rax

  result = 232LL;
  __asm { syscall; Low latency system call }
  return result;
}
