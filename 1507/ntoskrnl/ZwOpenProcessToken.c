/*
 * XREFs of ZwOpenProcessToken @ 0x140181270
 * Callers:
 *     VfZwOpenProcessToken @ 0x1407567C0 (VfZwOpenProcessToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
