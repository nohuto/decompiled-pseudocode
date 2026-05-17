/*
 * XREFs of NtAlpcDeletePortSection @ 0x1800940C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcDeletePortSection()
{
  __int64 result; // rax

  result = 124LL;
  __asm { syscall; Low latency system call }
  return result;
}
