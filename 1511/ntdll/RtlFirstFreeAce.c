/*
 * XREFs of RtlFirstFreeAce @ 0x180019670
 * Callers:
 *     RtlpAddKnownAce @ 0x180019524 (RtlpAddKnownAce.c)
 *     RtlpInheritAcl2 @ 0x18005FFB4 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlpCopyAces @ 0x18006192C (RtlpCopyAces.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x180065620 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 *     RtlDeleteAce @ 0x180079030 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x18007BBA0 (RtlQueryInformationAcl.c)
 *     RtlpAddKnownObjectAce @ 0x18008B09C (RtlpAddKnownObjectAce.c)
 *     RtlAddCompoundAce @ 0x1800D89B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D8B20 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D8E70 (RtlAddScopedPolicyIDAce.c)
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
