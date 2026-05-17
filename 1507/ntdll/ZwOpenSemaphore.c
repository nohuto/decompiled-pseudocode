/*
 * XREFs of ZwOpenSemaphore @ 0x180094A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenSemaphore()
{
  __int64 result; // rax

  result = 278LL;
  __asm { syscall; Low latency system call }
  return result;
}
