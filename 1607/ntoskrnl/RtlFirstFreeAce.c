/*
 * XREFs of RtlFirstFreeAce @ 0x14041F930
 * Callers:
 *     RtlQueryInformationAcl @ 0x140405ECC (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140406208 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x14041CB70 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x14041D100 (RtlpCombineAcls.c)
 *     RtlAddMandatoryAce @ 0x14041F9D0 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x14047C02C (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553FF8 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406847E4 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140684B08 (RtlpAddKnownObjectAce.c)
 *     SddlAddMandatoryAce @ 0x1406CBF98 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CC0F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC240 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlFirstFreeAce(PACL Acl, PACE *Ace)
{
  unsigned int v2; // r9d
  struct _ACE *v3; // r8

  v2 = 0;
  v3 = (struct _ACE *)&Acl[1];
  *Ace = 0LL;
  if ( Acl->AceCount )
  {
    while ( v3 < (struct _ACE *)((char *)Acl + Acl->AclSize) )
    {
      ++v2;
      v3 = (struct _ACE *)((char *)v3 + v3->Header.AceSize);
      if ( v2 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= (struct _ACE *)((char *)Acl + Acl->AclSize) )
      *Ace = v3;
    return 1;
  }
}
