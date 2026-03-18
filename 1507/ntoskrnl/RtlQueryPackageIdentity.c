/*
 * XREFs of RtlQueryPackageIdentity @ 0x14001AD60
 * Callers:
 *     PfSnCheckModernApp @ 0x140444420 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x14050D82C (EtwpQueryTokenPackageInfo.c)
 *     EtwpApplyPackageIdFilter @ 0x1406E9DF0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14001ADB0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageClaims(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
