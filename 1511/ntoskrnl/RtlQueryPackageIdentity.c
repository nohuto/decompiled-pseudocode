/*
 * XREFs of RtlQueryPackageIdentity @ 0x1400FB154
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x14044A220 (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x1404D71B4 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1400FB1A4 (RtlQueryPackageClaims.c)
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
