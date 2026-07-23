/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x180094170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcRevokeSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  NTSTATUS result; // eax

  result = 135;
  __asm { syscall; Low latency system call }
  return result;
}
