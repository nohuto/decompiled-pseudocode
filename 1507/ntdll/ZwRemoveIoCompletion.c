/*
 * XREFs of ZwRemoveIoCompletion @ 0x180093990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRemoveIoCompletion()
{
  __int64 result; // rax

  result = 9LL;
  __asm { syscall; Low latency system call }
  return result;
}
