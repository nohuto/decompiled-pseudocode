/*
 * XREFs of ZwQuerySecurityObject @ 0x14015C580
 * Callers:
 *     RtlIsUntrustedObject @ 0x1400FC880 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F6164 (CmpQueryFileSecurityDescriptor.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14063918C (PiDevCfgGetKeySecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation, SecurityDescriptor);
}
