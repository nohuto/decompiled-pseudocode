/*
 * XREFs of NtOpenProcessToken @ 0x14043557C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
