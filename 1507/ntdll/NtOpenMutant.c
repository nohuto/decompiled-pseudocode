/*
 * XREFs of NtOpenMutant @ 0x180094A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenMutant()
{
  __int64 result; // rax

  result = 272LL;
  __asm { syscall; Low latency system call }
  return result;
}
