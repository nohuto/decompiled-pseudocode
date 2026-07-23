/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x1406E9DF0
 * Callers:
 *     EtwpApplyScopeFilters @ 0x1404CECE4 (EtwpApplyScopeFilters.c)
 *     EtwpIsCaptureStateAllowed @ 0x1406EA4DC (EtwpIsCaptureStateAllowed.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14001AD60 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // di
  bool v7; // bp
  bool v8; // r15
  PACCESS_TOKEN v9; // r12
  bool v10; // bl
  unsigned __int16 v11; // bp
  unsigned int v12; // ebx
  unsigned __int16 v13; // si
  unsigned int v14; // ebx
  ULONG_PTR PackageSize; // [rsp+30h] [rbp-1E8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+38h] [rbp-1E0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+40h] [rbp-1D8h] BYREF
  WCHAR AppId[72]; // [rsp+140h] [rbp-D8h] BYREF

  v3 = 0;
  v7 = a2 == 0LL;
  v8 = a3 == 0LL;
  v9 = PsReferencePrimaryToken(*(PEPROCESS *)(a1 + 80));
  v10 = SeSecurityAttributePresent((__int64)v9, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent((__int64)v9, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v10 )
  {
    PackageSize = 256LL;
    AppIdSize = 130LL;
    if ( RtlQueryPackageIdentity(v9, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL) >= 0 )
    {
      if ( a2 )
      {
        v11 = 0;
        v12 = (PackageSize >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v11 + 4] != v12
               || wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], PackageFullName, v12) )
          {
            if ( ++v11 >= *a2 )
              goto LABEL_8;
          }
          v7 = 1;
        }
        else
        {
LABEL_8:
          v7 = 0;
        }
      }
      if ( a3 )
      {
        v13 = 0;
        v14 = (AppIdSize >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v13 + 4] != v14 || wcsnicmp(*(const wchar_t **)&a3[8 * v13 + 8], AppId, v14) )
          {
            if ( ++v13 >= *a3 )
              goto LABEL_14;
          }
          v8 = 1;
        }
        else
        {
LABEL_14:
          v8 = 0;
        }
      }
      if ( v7 && v8 )
        v3 = 1;
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 80) + 856LL), (unsigned __int64)v9);
  return v3;
}
