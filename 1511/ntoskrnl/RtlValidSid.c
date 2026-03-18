/*
 * XREFs of RtlValidSid @ 0x14046C1EC
 * Callers:
 *     AdtpPackageParameters @ 0x14013B28C (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140201BE8 (SepValidateCAPIDs.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1403BD9A0 (RtlLengthSidAsUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x14046C368 (RtlpValidateSidBuffer.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140528188 (RtlAddProcessTrustLabelAce.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1405F7360 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1405F9B18 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14060689C (PiAuCheckClientInteractive.c)
 *     RtlAddResourceAttributeAce @ 0x140644DCC (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406450F4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140656B20 (SepReadSingleCap.c)
 *     SddlAddMandatoryAce @ 0x14068757C (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406876D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140687828 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140769DE8 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > MmUserProbeAddress && Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
