/*
 * XREFs of RtlLengthRequiredSid @ 0x14046C3B0
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140211B20 (EtwpApplyPayloadFilterInternal.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x14046C368 (RtlpValidateSidBuffer.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14051E8D8 (CmpAdminSystemSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x14053FEB8 (PiAuAllocateAndInitializeSid.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14060689C (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x140646A50 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     SepVariableInitialization @ 0x14075CDE0 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407706F4 (CmpInitializeTrustedInstallerSid.c)
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
