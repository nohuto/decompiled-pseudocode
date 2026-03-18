/*
 * XREFs of RtlQueryPackageClaims @ 0x1400FB1A4
 * Callers:
 *     RtlQueryPackageIdentity @ 0x1400FB154 (RtlQueryPackageIdentity.c)
 *     SeQuerySigningPolicyWorker @ 0x140448AFC (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x1400FB2E4 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x1400FB3B0 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall RtlQueryPackageClaims(int a1, wchar_t *a2, size_t *a3, wchar_t *a4, size_t *a5, GUID *Guid)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-2F8h] BYREF
  size_t pcbRemaining; // [rsp+48h] [rbp-2F0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-2E0h]

  result = RtlpQueryPackageIdentityAttributes(a1);
  v10 = result;
  if ( result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(a2, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32));
      v10 = result;
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
    result = RtlStringCbPrintfExW(a4, *a5, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    v10 = result;
    if ( result < 0 )
      return result;
    *a5 = (char *)ppszDestEnd - (char *)a4 + 2;
  }
  if ( Guid )
  {
    v11 = v14;
    *(_QWORD *)&Guid->Data1 = 0LL;
    *(_QWORD *)Guid->Data4 = 0LL;
    if ( *(_DWORD *)(v11 + 24) > 2u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v11 + 32) + 32LL), Guid);
  }
  return v10;
}
