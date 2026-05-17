/*
 * XREFs of NtAlpcConnectPortEx @ 0x180094060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPortEx()
{
  __int64 result; // rax

  result = 118LL;
  __asm { syscall; Low latency system call }
  return result;
}
