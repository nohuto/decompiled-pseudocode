/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x180094E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRemoveIoCompletionEx()
{
  __int64 result; // rax

  result = 342LL;
  __asm { syscall; Low latency system call }
  return result;
}
