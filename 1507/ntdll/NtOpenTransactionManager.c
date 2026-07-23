/*
 * XREFs of NtOpenTransactionManager @ 0x180094AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 284;
  __asm { syscall; Low latency system call }
  return result;
}
