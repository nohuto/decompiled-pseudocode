/*
 * XREFs of NtCreateMutant @ 0x180094370
 * Callers:
 *     _ResCreateMutex @ 0x1800F9C0C (_ResCreateMutex.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateMutant()
{
  __int64 result; // rax

  result = 167LL;
  __asm { syscall; Low latency system call }
  return result;
}
