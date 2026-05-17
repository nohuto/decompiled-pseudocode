/*
 * XREFs of NtUnloadKey @ 0x1800953A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUnloadKey()
{
  __int64 result; // rax

  result = 426LL;
  __asm { syscall; Low latency system call }
  return result;
}
