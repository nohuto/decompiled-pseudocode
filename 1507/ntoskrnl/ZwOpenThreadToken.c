/*
 * XREFs of ZwOpenThreadToken @ 0x14017F470
 * Callers:
 *     VfZwOpenThreadToken @ 0x1407569B4 (VfZwOpenThreadToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
