/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x180094170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcRevokeSecurityContext()
{
  __int64 result; // rax

  result = 135LL;
  __asm { syscall; Low latency system call }
  return result;
}
