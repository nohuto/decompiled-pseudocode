/*
 * XREFs of NtRollbackEnlistment @ 0x180094F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRollbackEnlistment()
{
  __int64 result; // rax

  result = 356LL;
  __asm { syscall; Low latency system call }
  return result;
}
