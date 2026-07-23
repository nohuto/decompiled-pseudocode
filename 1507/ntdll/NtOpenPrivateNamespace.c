/*
 * XREFs of NtOpenPrivateNamespace @ 0x180094A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  NTSTATUS result; // eax

  result = 275;
  __asm { syscall; Low latency system call }
  return result;
}
