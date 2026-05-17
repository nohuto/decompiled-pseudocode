/*
 * XREFs of ZwAlpcDeleteSecurityContext @ 0x1800940F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcDeleteSecurityContext()
{
  __int64 result; // rax

  result = 127LL;
  __asm { syscall; Low latency system call }
  return result;
}
