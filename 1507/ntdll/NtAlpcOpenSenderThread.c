/*
 * XREFs of NtAlpcOpenSenderThread @ 0x180094140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcOpenSenderThread()
{
  __int64 result; // rax

  result = 132LL;
  __asm { syscall; Low latency system call }
  return result;
}
