/*
 * XREFs of RtlFirstFreeAce @ 0x140420A70
 * Callers:
 *     RtlQueryInformationAcl @ 0x14040700C (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140407348 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x14041DCB0 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x14041E240 (RtlpCombineAcls.c)
 *     RtlAddMandatoryAce @ 0x140420B10 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x14047D15C (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553AB8 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddResourceAttributeAce @ 0x140684700 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140684A24 (RtlpAddKnownObjectAce.c)
 *     SddlAddMandatoryAce @ 0x1406CBE60 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CBFB8 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC108 (SddlAddScopedPolicyIDAce.c)
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
