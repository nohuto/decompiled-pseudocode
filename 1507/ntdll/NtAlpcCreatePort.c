/*
 * XREFs of NtAlpcCreatePort @ 0x180094070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  NTSTATUS result; // eax

  result = 119;
  __asm { syscall; Low latency system call }
  return result;
}
