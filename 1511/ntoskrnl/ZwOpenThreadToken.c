/*
 * XREFs of ZwOpenThreadToken @ 0x140150AA0
 * Callers:
 *     VfZwOpenThreadToken @ 0x1406D2DEC (VfZwOpenThreadToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess, OpenAsSelf);
}
