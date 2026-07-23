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
