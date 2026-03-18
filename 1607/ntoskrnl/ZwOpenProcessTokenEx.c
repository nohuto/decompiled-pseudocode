/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14015A280
 * Callers:
 *     RtlAcquirePrivilege @ 0x1404DBF50 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1404DC178 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14053BDE0 (BiAdjustPrivilege.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406DF950 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, *(_QWORD *)&HandleAttributes);
}
