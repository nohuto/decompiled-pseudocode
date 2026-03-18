/*
 * XREFs of RtlLengthRequiredSid @ 0x1404792F0
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14022B614 (EtwpApplyPayloadFilterInternal.c)
 *     SeCaptureSecurityDescriptor @ 0x140420EC0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478C40 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1404791AC (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x1404792A8 (RtlpValidateSidBuffer.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x14057187C (PiAuAllocateAndInitializeSid.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140630CB8 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x140683988 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B889C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407ABBA0 (CmpInitializeTrustedInstallerSid.c)
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
