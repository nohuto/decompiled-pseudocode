/*
 * XREFs of RtlFirstFreeAce @ 0x180014E10
 * Callers:
 *     RtlpCombineAcls @ 0x1800061A8 (RtlpCombineAcls.c)
 *     RtlpAddKnownAce @ 0x180014CD4 (RtlpAddKnownAce.c)
 *     RtlpCopyAces @ 0x18003D350 (RtlpCopyAces.c)
 *     RtlpInheritAcl2 @ 0x180040628 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x18006B4B0 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x180073C00 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x18007B350 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x1800804D0 (RtlQueryInformationAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D740 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008FA2C (RtlpAddKnownObjectAce.c)
 *     RtlAddCompoundAce @ 0x1800E1460 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E1920 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v3; // ecx
  PACL v4; // r8

  v3 = 0;
  *FirstFree = 0LL;
  v4 = Acl + 1;
  if ( Acl->AceCount )
  {
    while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (PACL)((char *)v4 + v4->AclSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v4;
    return 1;
  }
}
