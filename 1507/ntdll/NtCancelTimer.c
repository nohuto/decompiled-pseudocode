/*
 * XREFs of NtCancelTimer @ 0x180093F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCancelTimer()
{
  __int64 result; // rax

  result = 97LL;
  __asm { syscall; Low latency system call }
  return result;
}
