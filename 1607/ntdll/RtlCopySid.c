/*
 * XREFs of RtlCopySid @ 0x18006B620
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B240 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x18006B4B0 (RtlAddMandatoryAce.c)
 *     RtlCreateAndSetSD @ 0x18008C7F0 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D740 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008FA2C (RtlpAddKnownObjectAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800DF7A0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddCompoundAce @ 0x1800E1460 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E1920 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
