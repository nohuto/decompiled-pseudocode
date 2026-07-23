/*
 * XREFs of NtOpenThreadToken @ 0x140412420
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
