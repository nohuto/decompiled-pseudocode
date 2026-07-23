/*
 * XREFs of RtlValidSid @ 0x140420690
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x14021B560 (SepValidateCAPIDs.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1403F78C8 (RtlLengthSidAsUnicodeString.c)
 *     RtlAddMandatoryAce @ 0x14041F9D0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x140478178 (RtlpValidateSidBuffer.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553FF8 (RtlAddProcessTrustLabelAce.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14062111C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140623544 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140630D6C (PiAuCheckClientInteractive.c)
 *     RtlAddResourceAttributeAce @ 0x1406847E4 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140684B08 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140696574 (SepReadSingleCap.c)
 *     SddlAddMandatoryAce @ 0x1406CBF98 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CC0F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC240 (SddlAddScopedPolicyIDAce.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
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
