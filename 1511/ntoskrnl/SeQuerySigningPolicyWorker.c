/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140448AFC
 * Callers:
 *     SeQuerySigningPolicy @ 0x14044869C (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1400FB1A4 (RtlQueryPackageClaims.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140448DB4 (SepIsNgenImage.c)
 *     PsQueryProcessAttributesByToken @ 0x14046F8E0 (PsQueryProcessAttributesByToken.c)
 *     SepIsLockedDown @ 0x14064D3D0 (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        char *a5,
        _BYTE *a6,
        unsigned __int8 *a7)
{
  NTSTATUS InformationToken; // ecx
  _BYTE *v12; // rax
  unsigned __int8 v13; // dl
  char v14; // dl
  unsigned __int64 *v15; // [rsp+38h] [rbp-18h]
  _BYTE v16[8]; // [rsp+40h] [rbp-10h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+48h] [rbp-8h] BYREF

  PsQueryProcessAttributesByToken(Token, 0LL, v16);
  if ( !v16[0] )
  {
    if ( !a2 || !(unsigned __int8)SepIsNgenImage(a2) )
    {
      if ( (a3 & 1) != 0 )
      {
        v13 = 18;
        if ( a4 )
          v13 = a4;
        *a7 = v13;
        *a5 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)v13 >> 4));
        *a6 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)*a7 >> 4) + 1);
        v14 = *a5;
        if ( (unsigned __int8)SeILSigningPolicy > (unsigned __int8)*a5 )
          v14 = SeILSigningPolicy;
        *a5 = v14;
        if ( (unsigned __int8)SeILSigningPolicy > *a6 )
          *a6 = SeILSigningPolicy;
        return 0;
      }
      goto LABEL_5;
    }
    PkgClaim.Flags = 0;
    InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)&PkgClaim);
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
    *a5 = 11;
    if ( (a3 & 1) != 0 )
    {
      if ( PkgClaim.Flags )
        *a6 = 6;
      else
        *a6 = 8;
      *a7 = 33;
      return 0;
    }
    if ( !PkgClaim.Flags )
    {
      *a6 = SeILSigningPolicy;
      *a7 = (unsigned __int8)SeILSigningPolicy >= 2u ? 0x21 : 0;
      return 0;
    }
    InformationToken = SepIsLockedDown(v16);
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
    v12 = a6;
    if ( v16[0] )
    {
LABEL_17:
      *v12 = 6;
      goto LABEL_6;
    }
    goto LABEL_26;
  }
  if ( (a3 & 1) != 0 )
  {
    *a5 = 4;
    *a6 = 4;
    *a7 = 18;
    return 0;
  }
  InformationToken = RtlQueryPackageClaims(Token, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, v15);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  if ( BYTE2(PkgClaim.Flags) <= 6uLL )
  {
    if ( BYTE2(PkgClaim.Flags) <= 1u )
    {
LABEL_5:
      *a5 = SeILSigningPolicy;
      *a6 = SeILSigningPolicy;
LABEL_6:
      *a7 = 0;
      return 0;
    }
    if ( BYTE2(PkgClaim.Flags) == 2 )
    {
      *a5 = 8;
      *a6 = SeILSigningPolicy;
      goto LABEL_6;
    }
    if ( BYTE2(PkgClaim.Flags) == 3 )
    {
      *a5 = 6;
      v12 = a6;
      goto LABEL_17;
    }
    if ( (unsigned int)BYTE2(PkgClaim.Flags) - 4 > 2 )
      return 0;
    *a5 = 0;
    v12 = a6;
LABEL_26:
    *v12 = 0;
    goto LABEL_6;
  }
  return 0;
}
