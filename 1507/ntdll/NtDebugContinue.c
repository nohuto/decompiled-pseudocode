/*
 * XREFs of NtDebugContinue @ 0x180094500
 * Callers:
 *     DbgUiContinue @ 0x1800BBEF0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

__int64 NtDebugContinue()
{
  __int64 result; // rax

  result = 192LL;
  __asm { syscall; Low latency system call }
  return result;
}
