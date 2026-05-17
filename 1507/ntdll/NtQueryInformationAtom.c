/*
 * XREFs of NtQueryInformationAtom @ 0x180094BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationAtom()
{
  __int64 result; // rax

  result = 303LL;
  __asm { syscall; Low latency system call }
  return result;
}
