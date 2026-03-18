/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14017F5D0
 * Callers:
 *     RtlpOpenThreadToken @ 0x140548804 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14056DB04 (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x140719838 (_SysCtxOpenEffectiveToken.c)
 *     VfZwOpenThreadTokenEx @ 0x140756A10 (VfZwOpenThreadTokenEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess, OpenAsSelf);
}
