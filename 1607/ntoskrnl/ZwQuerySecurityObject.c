/*
 * XREFs of ZwQuerySecurityObject @ 0x14015CAF0
 * Callers:
 *     RtlIsUntrustedObject @ 0x1400FA600 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F5028 (CmpQueryFileSecurityDescriptor.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140639240 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
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
