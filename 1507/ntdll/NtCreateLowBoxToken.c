/*
 * XREFs of NtCreateLowBoxToken @ 0x180094350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateLowBoxToken()
{
  __int64 result; // rax

  result = 165LL;
  __asm { syscall; Low latency system call }
  return result;
}
