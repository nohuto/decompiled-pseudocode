/*
 * XREFs of RtlFirstFreeAce @ 0x1404C9220
 * Callers:
 *     RtlpCombineAcls @ 0x140487120 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x1404876F0 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1404C90D0 (RtlAddMandatoryAce.c)
 *     RtlQueryInformationAcl @ 0x1404CFF04 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1404D046C (RtlAddAce.c)
 *     RtlDeleteAce @ 0x1405556B8 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x14059509C (RtlAddProcessTrustLabelAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406C7E58 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406C8180 (RtlpAddKnownObjectAce.c)
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
