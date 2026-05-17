/*
 * XREFs of NtSaveKeyEx @ 0x180094F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSaveKeyEx()
{
  __int64 result; // rax

  result = 360LL;
  __asm { syscall; Low latency system call }
  return result;
}
