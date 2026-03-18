/*
 * XREFs of ZwOpenProcessToken @ 0x140152900
 * Callers:
 *     VfZwOpenProcessToken @ 0x1406D2BF8 (VfZwOpenProcessToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, TokenHandle);
}
