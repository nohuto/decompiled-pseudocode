/*
 * XREFs of RtlValidSid @ 0x180014F70
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B774 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x18000B884 (RtlpValidateSidBuffer.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013D30 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x180014CD4 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180014E70 (RtlValidSecurityDescriptor.c)
 *     EvtIntReportEventWorker @ 0x1800598CC (EvtIntReportEventWorker.c)
 *     RtlAddMandatoryAce @ 0x18006B4B0 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D740 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008FA2C (RtlpAddKnownObjectAce.c)
 *     RtlAddCompoundAce @ 0x1800E1460 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E1920 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
