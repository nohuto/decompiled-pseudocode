/*
 * XREFs of NtDeleteWnfStateData @ 0x180094590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDeleteWnfStateData()
{
  __int64 result; // rax

  result = 201LL;
  __asm { syscall; Low latency system call }
  return result;
}
