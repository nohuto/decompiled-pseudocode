/*
 * XREFs of RtlCopySid @ 0x18004E900
 * Callers:
 *     RtlAddMandatoryAce @ 0x18004AD20 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18004E598 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpAddKnownObjectAce @ 0x180073D6C (RtlpAddKnownObjectAce.c)
 *     RtlCreateAndSetSD @ 0x180080030 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x180080B70 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800CE7B0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddCompoundAce @ 0x1800D0480 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D05F0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D0950 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
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
