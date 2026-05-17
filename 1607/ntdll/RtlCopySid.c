/*
 * XREFs of RtlCopySid @ 0x18006B630
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B250 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x18006B4C0 (RtlAddMandatoryAce.c)
 *     RtlCreateAndSetSD @ 0x18008C800 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D750 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008FA3C (RtlpAddKnownObjectAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800DF6E0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddCompoundAce @ 0x1800E13A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E1510 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E1860 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
