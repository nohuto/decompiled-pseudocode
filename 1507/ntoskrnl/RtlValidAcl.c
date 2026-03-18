/*
 * XREFs of RtlValidAcl @ 0x1404C9610
 * Callers:
 *     SepCheckAcl @ 0x14046BECC (SepCheckAcl.c)
 *     SeValidSecurityDescriptor @ 0x1404AB594 (SeValidSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404C90D0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1404C94D0 (RtlpAddKnownAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     RtlAddAce @ 0x1404D046C (RtlAddAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404FE3F0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1405556B8 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x14059509C (RtlAddProcessTrustLabelAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406C7E58 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406C8180 (RtlpAddKnownObjectAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidObjectAce @ 0x1405848AC (RtlpValidObjectAce.c)
 *     RtlpValidAttributeAce @ 0x1406C875C (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1406C8844 (RtlpValidCompoundAce.c)
 */

BOOLEAN __stdcall RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  PACL v3; // rbx
  unsigned int v4; // ebp
  int v5; // r15d
  int v6; // r12d
  ACL *v7; // rcx
  USHORT *v8; // rsi
  unsigned __int64 v9; // rdx
  UCHAR AclRevision; // cl
  UCHAR Sbz1; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return 0;
  p_AclSize = &Acl->AclSize;
  if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize || *p_AclSize < 8u )
    return 0;
  v3 = Acl + 1;
  v4 = 0;
  if ( !Acl->AceCount )
    return 1;
  v5 = 1730063;
  v6 = 104928;
  while ( 1 )
  {
    v7 = (PACL)((char *)Acl + *p_AclSize);
    if ( &v3->AceCount >= (USHORT *)v7 )
      break;
    v8 = &v3->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
      break;
    v9 = *v8;
    if ( (PACL)((char *)v3 + v9) > v7 )
      break;
    AclRevision = v3->AclRevision;
    if ( v3->AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
    {
      if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
        return 0;
      if ( (unsigned int)v9 < 0x10 )
        return 0;
      if ( v3[1].AclRevision != 1 )
        return 0;
      Sbz1 = v3[1].Sbz1;
      if ( Sbz1 > 0xFu || v9 < 4 * Sbz1 + 8 + 8LL )
        return 0;
    }
    else if ( AclRevision == 4 )
    {
      if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v3) )
        return 0;
    }
    else if ( AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
    {
      if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( AclRevision == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v3) )
        return 0;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      return 0;
    }
    ++v4;
    v3 = (PACL)((char *)v3 + *v8);
    if ( v4 >= Acl->AceCount )
      return 1;
  }
  return 0;
}
