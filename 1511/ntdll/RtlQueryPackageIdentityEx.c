/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x18004C470
 * Callers:
 *     RtlQueryPackageIdentity @ 0x18004C420 (RtlQueryPackageIdentity.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18004C4E0 (RtlQueryPackageClaims.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentityEx(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PULONG64 Flags)
{
  NTSTATUS result; // eax
  unsigned __int64 *v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  result = RtlQueryPackageClaims(
             TokenHandle,
             PackageFullName,
             PackageSize,
             AppId,
             AppIdSize,
             DynamicId,
             (PPS_PKG_CLAIM)((unsigned __int64)&v9 & -(__int64)(Flags != 0LL)),
             v8);
  if ( result >= 0 )
  {
    if ( Flags )
      *Flags = (unsigned __int16)v9;
  }
  return result;
}
