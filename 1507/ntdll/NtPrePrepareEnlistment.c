/*
 * XREFs of NtPrePrepareEnlistment @ 0x180094AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtPrePrepareEnlistment()
{
  __int64 result; // rax

  result = 287LL;
  __asm { syscall; Low latency system call }
  return result;
}
