/*
 * XREFs of RtlValidSid @ 0x1404CA0C0
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140250BFC (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     RtlpValidateSidBuffer @ 0x140470CDC (RtlpValidateSidBuffer.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404C90D0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1405009D4 (RtlLengthSidAsUnicodeString.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14059509C (RtlAddProcessTrustLabelAce.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140671158 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140673DA4 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140681644 (PiAuCheckClientInteractive.c)
 *     RtlAddResourceAttributeAce @ 0x1406C7E58 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406C8180 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1406D8FD8 (SepReadSingleCap.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1407DE000 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= MmUserProbeAddress )
    return 0;
  if ( !Sid )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
