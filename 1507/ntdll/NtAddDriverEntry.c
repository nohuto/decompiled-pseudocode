/*
 * XREFs of NtAddDriverEntry @ 0x180093F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAddDriverEntry()
{
  __int64 result; // rax

  result = 105LL;
  __asm { syscall; Low latency system call }
  return result;
}
