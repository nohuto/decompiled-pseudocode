/*
 * XREFs of ZwOpenProcessTokenEx @ 0x140150C20
 * Callers:
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x1404B404C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1404B4274 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x1404FB56C (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406999DC (_SysCtxOpenEffectiveToken.c)
 *     VfZwOpenProcessTokenEx @ 0x1406D2C44 (VfZwOpenProcessTokenEx.c)
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
