/*
 * XREFs of NtDeleteAtom @ 0x180094510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDeleteAtom()
{
  __int64 result; // rax

  result = 193LL;
  __asm { syscall; Low latency system call }
  return result;
}
