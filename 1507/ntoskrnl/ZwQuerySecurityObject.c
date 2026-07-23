/*
 * XREFs of ZwQuerySecurityObject @ 0x140181830
 * Callers:
 *     RtlIsUntrustedObject @ 0x14012AE2C (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 *     VfZwQuerySecurityObject @ 0x140757844 (VfZwQuerySecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
