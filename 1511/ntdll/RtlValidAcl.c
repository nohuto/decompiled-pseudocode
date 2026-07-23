/*
 * XREFs of RtlValidAcl @ 0x1800196D0
 * Callers:
 *     RtlpAddKnownAce @ 0x180019524 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180019930 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x180065620 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180075A60 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x180079030 (RtlDeleteAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B09C (RtlpAddKnownObjectAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddCompoundAce @ 0x1800D89B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D8B20 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D8E70 (RtlAddScopedPolicyIDAce.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1800D9D08 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800D9E00 (RtlpValidCompoundAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned __int16 *p_AclSize; // r15
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  ACL *v7; // rcx
  unsigned __int16 *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int8 AclRevision; // cl
  unsigned __int8 Sbz1; // al
  unsigned int v12; // ecx
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // al
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    v4 = 0;
    v5 = 1730063;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= Acl->AceCount )
        return 1;
      v7 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount >= (unsigned __int16 *)v7 )
        return 0;
      v8 = &v3->AclSize;
      if ( (unsigned __int16 *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
        return 0;
      v9 = *v8;
      if ( (PACL)((char *)v3 + v9) > v7 )
        return 0;
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
        if ( Acl->AclRevision < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        v12 = 0;
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 || (unsigned int)v9 < 0xC )
          return 0;
        v13 = *(_DWORD *)&v3[1].AclRevision;
        if ( (v13 & 1) != 0 )
          v12 = 16;
        v14 = v13 & 2;
        if ( v14 )
          v12 += 16;
        v15 = v12;
        if ( v9 < (unsigned __int64)v12 + 24 )
          return 0;
        v16 = (*(_DWORD *)&v3[1].AclRevision & 1) != 0 ? 16LL : 0LL;
        v17 = v16 + (v14 != 0 ? 0x10 : 0);
        if ( *((_BYTE *)&v3[1].AceCount + v17) != 1 )
          return 0;
        v18 = *((_BYTE *)&v3[1].AceCount + v17 + 1);
        if ( v18 > 0xFu || v9 < v15 + 4 * v18 + 8 + 12LL )
          return 0;
      }
      else if ( AclRevision == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v8);
      ++v4;
    }
  }
  return 0;
}
