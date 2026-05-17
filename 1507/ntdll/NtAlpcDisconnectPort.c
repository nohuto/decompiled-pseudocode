/*
 * XREFs of NtAlpcDisconnectPort @ 0x180094100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcDisconnectPort()
{
  __int64 result; // rax

  result = 128LL;
  __asm { syscall; Low latency system call }
  return result;
}
