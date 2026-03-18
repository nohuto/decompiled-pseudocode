/*
 * XREFs of RtlValidSid @ 0x1404217D0
 * Callers:
 *     AdtpPackageParameters @ 0x140144450 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x14021B734 (SepValidateCAPIDs.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1403F8A08 (RtlLengthSidAsUnicodeString.c)
 *     RtlAddMandatoryAce @ 0x140420B10 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140420EC0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478C40 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1404791AC (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x1404792A8 (RtlpValidateSidBuffer.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x1404BCD44 (RtlValidSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553AB8 (RtlAddProcessTrustLabelAce.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140621068 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140623490 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140630CB8 (PiAuCheckClientInteractive.c)
 *     RtlAddResourceAttributeAce @ 0x140684700 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140684A24 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140696490 (SepReadSingleCap.c)
 *     SddlAddMandatoryAce @ 0x1406CBE60 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CBFB8 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC108 (SddlAddScopedPolicyIDAce.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1407B3580 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
