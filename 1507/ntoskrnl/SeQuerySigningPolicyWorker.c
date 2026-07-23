/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x14050B8C8
 * Callers:
 *     SeQuerySigningPolicy @ 0x14050B2FC (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14001ADB0 (RtlQueryPackageClaims.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x1405092B4 (SepIsNgenImage.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 *     SepIsLockedDown @ 0x1406D0808 (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        HANDLE TokenHandle,
        unsigned __int16 *a2,
        char a3,
        unsigned __int8 a4,
        char *a5,
        _BYTE *a6,
        unsigned __int8 *a7)
{
  NTSTATUS PackageClaims; // ecx
  _BYTE *v12; // rax
  unsigned __int8 v13; // dl
  char v14; // dl
  unsigned __int64 *v15; // [rsp+38h] [rbp-18h]
  _BYTE v16[8]; // [rsp+40h] [rbp-10h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-8h] BYREF

  if ( (unsigned __int8)SeSecurityAttributePresent(TokenHandle, &PspPackagedAppClaim) )
  {
    if ( (a3 & 1) != 0 )
    {
      *a5 = 4;
      *a6 = 4;
      *a7 = 18;
      return 0;
    }
    PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, 0LL, 0LL, (PPS_PKG_CLAIM)&TokenInformation, v15);
    if ( PackageClaims < 0 )
      return (unsigned int)PackageClaims;
    if ( BYTE2(TokenInformation) > 6uLL )
      return 0;
    if ( BYTE2(TokenInformation) <= 1u )
      goto LABEL_5;
    if ( BYTE2(TokenInformation) == 2 )
    {
LABEL_12:
      *a5 = 8;
      *a6 = SeILSigningPolicy;
      goto LABEL_6;
    }
    if ( BYTE2(TokenInformation) == 3 )
    {
      *a5 = 6;
      v12 = a6;
      goto LABEL_20;
    }
    if ( (unsigned int)BYTE2(TokenInformation) - 4 > 2 )
      return 0;
    *a5 = 0;
    v12 = a6;
LABEL_33:
    *v12 = 0;
    goto LABEL_6;
  }
  if ( a2 && SepIsNgenImage(a2) )
  {
    LODWORD(TokenInformation) = 0;
    PackageClaims = SeQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation);
    if ( PackageClaims < 0 )
      return (unsigned int)PackageClaims;
    if ( (a3 & 1) != 0 )
    {
      *a5 = 11;
      if ( (_DWORD)TokenInformation )
        *a6 = 6;
      else
        *a6 = 8;
      *a7 = 33;
      return 0;
    }
    if ( !(_DWORD)TokenInformation )
      goto LABEL_12;
    PackageClaims = SepIsLockedDown(v16);
    if ( PackageClaims < 0 )
      return (unsigned int)PackageClaims;
    *a5 = 8;
    v12 = a6;
    if ( v16[0] )
    {
LABEL_20:
      *v12 = 6;
      goto LABEL_6;
    }
    goto LABEL_33;
  }
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
LABEL_5:
  *a5 = SeILSigningPolicy;
  *a6 = SeILSigningPolicy;
LABEL_6:
  *a7 = 0;
  return 0;
}
