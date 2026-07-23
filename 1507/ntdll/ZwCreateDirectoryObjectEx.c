/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1800942C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  NTSTATUS result; // eax

  result = 156;
  __asm { syscall; Low latency system call }
  return result;
}
