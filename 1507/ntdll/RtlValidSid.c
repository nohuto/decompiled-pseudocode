/*
 * XREFs of RtlValidSid @ 0x180020320
 * Callers:
 *     EvtIntReportEventWorker @ 0x18000E64C (EvtIntReportEventWorker.c)
 *     RtlLengthSidAsUnicodeString @ 0x18001FC70 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001FD80 (RtlConvertSidToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180020220 (RtlValidSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlAddMandatoryAce @ 0x18004AD20 (RtlAddMandatoryAce.c)
 *     RtlpValidateSidBuffer @ 0x1800528D8 (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpAddKnownObjectAce @ 0x180073D6C (RtlpAddKnownObjectAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180080B70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddCompoundAce @ 0x1800D0480 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D05F0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D0950 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
