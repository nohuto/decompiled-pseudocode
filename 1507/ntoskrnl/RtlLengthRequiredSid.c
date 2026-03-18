/*
 * XREFs of RtlLengthRequiredSid @ 0x140470D24
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402610C8 (EtwpApplyPayloadFilterInternal.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x140470CDC (RtlpValidateSidBuffer.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x1405B5958 (PiAuAllocateAndInitializeSid.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140681644 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1406C9AC4 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     SepVariableInitialization @ 0x1407BD8FC (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407D6020 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
