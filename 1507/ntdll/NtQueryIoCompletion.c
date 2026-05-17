/*
 * XREFs of NtQueryIoCompletion @ 0x180094C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryIoCompletion()
{
  __int64 result; // rax

  result = 313LL;
  __asm { syscall; Low latency system call }
  return result;
}
