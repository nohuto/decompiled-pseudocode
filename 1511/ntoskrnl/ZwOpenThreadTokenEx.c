/*
 * XREFs of ZwOpenThreadTokenEx @ 0x140150C00
 * Callers:
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x1404B4390 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x1404FB56C (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406999DC (_SysCtxOpenEffectiveToken.c)
 *     VfZwOpenThreadTokenEx @ 0x1406D2E48 (VfZwOpenThreadTokenEx.c)
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
