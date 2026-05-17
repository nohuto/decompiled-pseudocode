/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x1800952A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSignalAndWaitForSingleObject()
{
  __int64 result; // rax

  result = 410LL;
  __asm { syscall; Low latency system call }
  return result;
}
