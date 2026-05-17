/*
 * XREFs of RtlCopySid @ 0x180062220
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x180061730 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B09C (RtlpAddKnownObjectAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800D6DB0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddCompoundAce @ 0x1800D89B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D8B20 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D8E70 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
