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

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  unsigned __int64 *v7; // [rsp+38h] [rbp-20h]
  _PS_PKG_CLAIM v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  result = RtlQueryPackageClaims(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0LL, &v8, v7);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = LOWORD(v8.Flags) != 0LL;
  }
  return result;
}
