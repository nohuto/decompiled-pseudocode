/*
 * XREFs of NtAlpcCancelMessage @ 0x180094040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcCancelMessage()
{
  __int64 result; // rax

  result = 116LL;
  __asm { syscall; Low latency system call }
  return result;
}
