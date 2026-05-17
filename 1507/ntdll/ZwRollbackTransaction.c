/*
 * XREFs of ZwRollbackTransaction @ 0x180094F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRollbackTransaction()
{
  __int64 result; // rax

  result = 357LL;
  __asm { syscall; Low latency system call }
  return result;
}
