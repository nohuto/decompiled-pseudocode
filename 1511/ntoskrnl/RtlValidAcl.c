/*
 * XREFs of RtlValidAcl @ 0x140435170
 * Callers:
 *     RtlAddAce @ 0x1403BDC98 (RtlAddAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403E083C (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404342D0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     SepCheckAcl @ 0x14043562C (SepCheckAcl.c)
 *     RtlDeleteAce @ 0x1404B770C (RtlDeleteAce.c)
 *     SeValidSecurityDescriptor @ 0x1404C9604 (SeValidSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140528188 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddResourceAttributeAce @ 0x140644DCC (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406450F4 (RtlpAddKnownObjectAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x14068757C (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406876D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140687828 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406456D0 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1406457B8 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x14064582C (RtlpValidObjectAce.c)
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
