/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14015A260
 * Callers:
 *     RtlpOpenThreadToken @ 0x1404DC294 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14053BDE0 (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406DF950 (_SysCtxOpenEffectiveToken.c)
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
