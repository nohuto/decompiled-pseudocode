/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x1800940B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  NTSTATUS result; // eax

  result = 123;
  __asm { syscall; Low latency system call }
  return result;
}
