/*
 * XREFs of RtlFirstFreeAce @ 0x1403BDDB8
 * Callers:
 *     RtlAddAce @ 0x1403BDC98 (RtlAddAce.c)
 *     RtlQueryInformationAcl @ 0x1404211B0 (RtlQueryInformationAcl.c)
 *     RtlpInheritAcl2 @ 0x140471430 (RtlpInheritAcl2.c)
 *     RtlDeleteAce @ 0x1404B770C (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140528188 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddResourceAttributeAce @ 0x140644DCC (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406450F4 (RtlpAddKnownObjectAce.c)
 *     SddlAddMandatoryAce @ 0x14068757C (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406876D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140687828 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlFirstFreeAce(PACL Acl, PACE *Ace)
{
  unsigned int v3; // ecx
  struct _ACE *v4; // r8

  v3 = 0;
  *Ace = 0LL;
  v4 = (struct _ACE *)&Acl[1];
  if ( Acl->AceCount )
  {
    while ( v4 < (struct _ACE *)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (struct _ACE *)((char *)v4 + v4->Header.AceSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= (struct _ACE *)((char *)Acl + Acl->AclSize) )
      *Ace = v4;
    return 1;
  }
}
