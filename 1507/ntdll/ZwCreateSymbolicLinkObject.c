/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x180094420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  NTSTATUS result; // eax

  result = 178;
  __asm { syscall; Low latency system call }
  return result;
}
