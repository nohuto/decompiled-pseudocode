/*
 * XREFs of ZwRollbackComplete @ 0x180094F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRollbackComplete()
{
  __int64 result; // rax

  result = 355LL;
  __asm { syscall; Low latency system call }
  return result;
}
