/*
 * XREFs of NtOpenThreadToken @ 0x140413560
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
