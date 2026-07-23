/*
 * XREFs of RtlQueryPackageIdentity @ 0x14000C818
 * Callers:
 *     PfSnCheckModernApp @ 0x1403E8948 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045CA10 (EtwpQueryTokenPackageInfo.c)
 *     PspIdentityBasedJobBreakaway @ 0x14067F260 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14000C86C (RtlQueryPackageClaims.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  _PS_PKG_CLAIM v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  result = RtlQueryPackageClaims(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0LL, &v7, 0LL);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = LOWORD(v7.Flags) != 0LL;
  }
  return result;
}
