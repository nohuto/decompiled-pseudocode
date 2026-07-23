/*
 * XREFs of ZwCreatePrivateNamespace @ 0x1800943C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  NTSTATUS result; // eax

  result = 172;
  __asm { syscall; Low latency system call }
  return result;
}
