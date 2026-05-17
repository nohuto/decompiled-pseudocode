/*
 * XREFs of ZwQuerySemaphore @ 0x180094D30
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x180082E70 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySemaphore()
{
  __int64 result; // rax

  result = 323LL;
  __asm { syscall; Low latency system call }
  return result;
}
