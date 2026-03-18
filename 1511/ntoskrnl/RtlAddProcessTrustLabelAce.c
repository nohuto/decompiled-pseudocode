/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140528188
 * Callers:
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x14075BF7C (SeMakeSystemToken.c)
 *     BuildKnownDlls @ 0x14075C938 (BuildKnownDlls.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x1403BDDB8 (RtlFirstFreeAce.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x14042536C (RtlIsValidProcessTrustLabelSid.c)
 *     RtlValidAcl @ 0x140435170 (RtlValidAcl.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(PACL Acl, unsigned int a2, int a3, unsigned __int8 *a4, char a5, int a6)
{
  UCHAR AclRevision; // bp
  int v11; // esi
  PACE v12; // rdx
  WORD v13; // r8
  __int64 result; // rax
  PACE Ace; // [rsp+40h] [rbp+8h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = a2;
  if ( Acl->AclRevision > a2 )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v11 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v12 = Ace;
  v13 = 4 * (a4[1] + 4);
  if ( !Ace || (char *)Ace + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceSize = v13;
  v12->Header.AceFlags = a3;
  v12->Header.AceType = 20;
  v12->AccessMask = v11;
  RtlCopySid(4 * a4[1] + 8, &v12[1], a4);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
