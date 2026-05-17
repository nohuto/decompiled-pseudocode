/*
 * XREFs of NtAlertThread @ 0x180093FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlertThread()
{
  __int64 result; // rax

  result = 109LL;
  __asm { syscall; Low latency system call }
  return result;
}
