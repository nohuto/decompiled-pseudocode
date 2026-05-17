/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x180094130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcOpenSenderProcess()
{
  __int64 result; // rax

  result = 131LL;
  __asm { syscall; Low latency system call }
  return result;
}
