/*
 * XREFs of NtLoadKeyEx @ 0x180094880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtLoadKeyEx()
{
  __int64 result; // rax

  result = 248LL;
  __asm { syscall; Low latency system call }
  return result;
}
