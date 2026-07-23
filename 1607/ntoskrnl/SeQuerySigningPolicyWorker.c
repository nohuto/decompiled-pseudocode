/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x14045C0CC
 * Callers:
 *     SeQuerySigningPolicy @ 0x14045B8FC (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14000C86C (RtlQueryPackageClaims.c)
 *     PsQueryProcessAttributesByToken @ 0x14040C014 (PsQueryProcessAttributesByToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x14045C340 (SepIsNgenImage.c)
 *     SepIsLockedDown @ 0x14068CAC0 (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  NTSTATUS InformationToken; // ecx
  char v11; // cl
  char v12; // cl
  char *v13; // rax
  unsigned __int8 v14; // dl
  char v15; // dl
  char v17[8]; // [rsp+40h] [rbp-10h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+48h] [rbp-8h] BYREF

  PkgClaim = 0LL;
  PsQueryProcessAttributesByToken((__int64)Token, 0LL, v17);
  if ( v17[0] )
  {
    InformationToken = RtlQueryPackageClaims(Token, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL);
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
    v11 = v17[0];
    if ( (PkgClaim.Flags & 4) != 0 )
      v11 = 0;
    if ( v11 )
    {
      if ( (a3 & 1) != 0 )
      {
        *a5 = 4;
        *a6 = 4;
        *a7 = 18;
        return 0;
      }
      if ( BYTE2(PkgClaim.Flags) > 1uLL )
      {
        if ( BYTE2(PkgClaim.Flags) == 2LL )
        {
          *a5 = 8;
          *a6 = SeILSigningPolicy;
          goto LABEL_40;
        }
        if ( BYTE2(PkgClaim.Flags) != 3LL )
        {
          if ( (unsigned __int64)BYTE2(PkgClaim.Flags) - 4 > 2 )
            return 0;
          v12 = 0;
          if ( SeILSigningPolicy == 2 )
            v12 = 2;
          *a5 = v12;
          goto LABEL_39;
        }
        *a5 = 6;
        v13 = a6;
LABEL_16:
        *v13 = 6;
LABEL_40:
        *a7 = 0;
        return 0;
      }
LABEL_38:
      *a5 = SeILSigningPolicy;
      v12 = SeILSigningPolicy;
LABEL_39:
      *a6 = v12;
      goto LABEL_40;
    }
  }
  if ( !a2 || !(unsigned __int8)SepIsNgenImage(a2) )
  {
    if ( (a3 & 1) != 0 )
    {
      v14 = 18;
      if ( a4 )
        v14 = a4;
      *a7 = v14;
      *a5 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)v14 >> 4));
      *a6 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)*a7 >> 4) + 1);
      v15 = *a5;
      if ( (unsigned __int8)SeILSigningPolicy > (unsigned __int8)*a5 )
        v15 = SeILSigningPolicy;
      *a5 = v15;
      if ( (unsigned __int8)SeILSigningPolicy > (unsigned __int8)*a6 )
        *a6 = SeILSigningPolicy;
      return 0;
    }
    goto LABEL_38;
  }
  PkgClaim.Flags = 0;
  InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)&PkgClaim);
  if ( InformationToken >= 0 )
  {
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
    InformationToken = SepIsLockedDown(v17);
    if ( InformationToken >= 0 )
    {
      v13 = a6;
      if ( !v17[0] )
      {
        *a6 = 0;
        goto LABEL_40;
      }
      goto LABEL_16;
    }
  }
  return (unsigned int)InformationToken;
}
