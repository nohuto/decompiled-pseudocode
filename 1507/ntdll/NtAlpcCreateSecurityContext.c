/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x1800940B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcCreateSecurityContext()
{
  __int64 result; // rax

  result = 123LL;
  __asm { syscall; Low latency system call }
  return result;
}
