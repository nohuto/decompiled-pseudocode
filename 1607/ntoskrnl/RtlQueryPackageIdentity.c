/*
 * XREFs of RtlQueryPackageIdentity @ 0x14000CC98
 * Callers:
 *     PfSnCheckModernApp @ 0x1403E7318 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045DB40 (EtwpQueryTokenPackageInfo.c)
 *     PspIdentityBasedJobBreakaway @ 0x14067F17C (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8B50 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14000CCEC (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageClaims(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
