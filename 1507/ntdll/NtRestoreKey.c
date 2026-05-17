/*
 * XREFs of NtRestoreKey @ 0x180094F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRestoreKey()
{
  __int64 result; // rax

  result = 352LL;
  __asm { syscall; Low latency system call }
  return result;
}
