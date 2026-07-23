/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14017F5F0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1405484C0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1405486E8 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14056DB04 (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x140719838 (_SysCtxOpenEffectiveToken.c)
 *     VfZwOpenProcessTokenEx @ 0x14075680C (VfZwOpenProcessTokenEx.c)
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
