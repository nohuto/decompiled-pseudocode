/*
 * XREFs of NtCreateToken @ 0x180094460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateToken()
{
  __int64 result; // rax

  result = 182LL;
  __asm { syscall; Low latency system call }
  return result;
}
