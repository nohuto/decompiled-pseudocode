/*
 * XREFs of RtlQueryPackageClaims @ 0x14001ADB0
 * Callers:
 *     RtlQueryPackageIdentity @ 0x14001AD60 (RtlQueryPackageIdentity.c)
 *     SeQuerySigningPolicyWorker @ 0x14050B8C8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x14001AEF0 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x14001AFBC (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-2F8h] BYREF
  size_t pcbRemaining; // [rsp+48h] [rbp-2F0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-2E0h]

  result = RtlpQueryPackageIdentityAttributes((_DWORD)TokenHandle);
  v12 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 PackageFullName,
                 *PackageSize,
                 &ppszDestEnd,
                 &pcbRemaining,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v16 + 32));
      v12 = result;
      if ( result < 0 )
        return result;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_7:
  if ( AppId )
  {
    result = RtlStringCbPrintfExW(AppId, *AppIdSize, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v16 + 32) + 16LL);
    v12 = result;
    if ( result < 0 )
      return result;
    *AppIdSize = (char *)ppszDestEnd - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    v13 = v16;
    *(_QWORD *)&DynamicId->Data1 = 0LL;
    *(_QWORD *)DynamicId->Data4 = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 2u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v13 + 32) + 32LL), DynamicId);
  }
  return v12;
}
