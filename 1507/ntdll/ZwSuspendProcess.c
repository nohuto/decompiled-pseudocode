/*
 * XREFs of ZwSuspendProcess @ 0x1800952F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSuspendProcess()
{
  __int64 result; // rax

  result = 415LL;
  __asm { syscall; Low latency system call }
  return result;
}
