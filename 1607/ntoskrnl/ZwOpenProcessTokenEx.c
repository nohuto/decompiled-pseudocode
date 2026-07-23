/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14015A7F0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1404BF554 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1404BF77C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14053C320 (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406DFA88 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
