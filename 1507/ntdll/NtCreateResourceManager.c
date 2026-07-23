/*
 * XREFs of NtCreateResourceManager @ 0x180094400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID RmGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  NTSTATUS result; // eax

  result = 176;
  __asm { syscall; Low latency system call }
  return result;
}
