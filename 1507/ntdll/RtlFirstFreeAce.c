/*
 * XREFs of RtlFirstFreeAce @ 0x1800201C0
 * Callers:
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 *     RtlAddMandatoryAce @ 0x18004AD20 (RtlAddMandatoryAce.c)
 *     RtlpInheritAcl2 @ 0x18004C810 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x18004DAD4 (RtlpCopyAces.c)
 *     RtlpCombineAcls @ 0x18004DF20 (RtlpCombineAcls.c)
 *     RtlAddAce @ 0x180066D40 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x18006F3C0 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x18006FFD0 (RtlQueryInformationAcl.c)
 *     RtlpAddKnownObjectAce @ 0x180073D6C (RtlpAddKnownObjectAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180080B70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddCompoundAce @ 0x1800D0480 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D05F0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D0950 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8

  v3 = 0;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v4 < (unsigned __int64)*(unsigned __int16 *)(a1 + 2) + a1 )
    {
      ++v3;
      v4 += *(unsigned __int16 *)(v4 + 2);
      if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v4;
    return 1;
  }
}
