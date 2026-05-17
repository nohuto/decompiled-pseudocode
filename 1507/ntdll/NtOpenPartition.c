/*
 * XREFs of NtOpenPartition @ 0x180094A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenPartition()
{
  __int64 result; // rax

  result = 274LL;
  __asm { syscall; Low latency system call }
  return result;
}
