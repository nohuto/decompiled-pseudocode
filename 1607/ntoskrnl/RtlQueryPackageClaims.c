/*
 * XREFs of RtlQueryPackageClaims @ 0x14000CCEC
 * Callers:
 *     RtlQueryPackageIdentity @ 0x14000CC98 (RtlQueryPackageIdentity.c)
 *     SepDesktopAppxSubProcessToken @ 0x14007BF38 (SepDesktopAppxSubProcessToken.c)
 *     SeQuerySigningPolicyWorker @ 0x14045D1FC (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x14000DAB8 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x1400A8DE0 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall RtlQueryPackageClaims(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        __int64 a7,
        __int64 a8)
{
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-388h] BYREF
  size_t pcbRemaining; // [rsp+48h] [rbp-380h] BYREF
  __int64 v16; // [rsp+58h] [rbp-370h]

  result = RtlpQueryPackageIdentityAttributes(a1, a8);
  v12 = result;
  if ( result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(a2, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v16 + 32));
      v12 = result;
      if ( result < 0 )
        return result;
      *a3 = (char *)ppszDestEnd - (char *)a2 + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( a3 )
    return -1073741811;
LABEL_7:
  if ( a4 )
  {
    result = RtlStringCbPrintfExW(a4, *a5, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v16 + 32) + 16LL);
    v12 = result;
    if ( result < 0 )
      return result;
    *a5 = (char *)ppszDestEnd - (char *)a4 + 2;
  }
  if ( Guid )
  {
    v13 = v16;
    *(_QWORD *)&Guid->Data1 = 0LL;
    *(_QWORD *)Guid->Data4 = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v13 + 32) + 48LL), Guid);
  }
  return v12;
}
