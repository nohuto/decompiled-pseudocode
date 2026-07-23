/*
 * XREFs of RtlpAddKnownObjectAce @ 0x140684B08
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x14068467C (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1406846D8 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x14068477C (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x14041F930 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        ACCESS_MASK a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        BYTE a8)
{
  int v12; // esi
  __int64 result; // rax
  unsigned int v14; // eax
  int v15; // eax
  WORD v16; // dx
  PACE v17; // r8
  ACCESS_MASK *p_AccessMask; // rdx
  PACE Ace; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  v14 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v14 = a3 & 0xFFFFFF20;
    if ( v14 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v15 = Sid[1];
  v16 = 4 * v15 + 20;
  if ( a5 )
  {
    v12 = 1;
    v16 = 4 * v15 + 36;
  }
  if ( a6 )
  {
    v12 |= 2u;
    v16 += 16;
  }
  v17 = Ace;
  if ( !Ace || (char *)Ace + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceSize = v16;
  p_AccessMask = &v17[1].AccessMask;
  v17->Header.AceFlags = a3;
  v17->Header.AceType = a8;
  v17->AccessMask = a4;
  v17[1].Header = (ACE_HEADER)v12;
  if ( a5 )
  {
    *(_OWORD *)p_AccessMask = *a5;
    p_AccessMask = &v17[3].AccessMask;
  }
  if ( a6 )
  {
    *(_OWORD *)p_AccessMask = *a6;
    p_AccessMask += 4;
  }
  RtlCopySid(4 * v15 + 8, p_AccessMask, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
