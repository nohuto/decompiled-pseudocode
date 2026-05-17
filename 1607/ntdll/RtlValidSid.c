/*
 * XREFs of RtlValidSid @ 0x180014F80
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B784 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x18000B894 (RtlpValidateSidBuffer.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013D40 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149E0 (RtlConvertSidToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x180014CE4 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180014E80 (RtlValidSecurityDescriptor.c)
 *     EvtIntReportEventWorker @ 0x1800598DC (EvtIntReportEventWorker.c)
 *     RtlAddMandatoryAce @ 0x18006B4C0 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D750 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008FA3C (RtlpAddKnownObjectAce.c)
 *     RtlAddCompoundAce @ 0x1800E13A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E1510 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E1860 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidSid(_BYTE *a1)
{
  return a1 && (*a1 & 0xF) == 1 && a1[1] <= 0xFu;
}
