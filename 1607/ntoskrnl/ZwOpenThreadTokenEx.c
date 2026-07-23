/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14015A7D0
 * Callers:
 *     RtlpOpenThreadToken @ 0x1404BF898 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14053C320 (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406DFA88 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
