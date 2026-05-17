/*
 * XREFs of RtlQueryPackageClaims @ 0x18004C4E0
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x18004C470 (RtlQueryPackageIdentityEx.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x18004C64C (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x18004C724 (RtlStringCbPrintfExW.c)
 *     RtlGUIDFromString @ 0x18004C8B0 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryPackageClaims(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp-2F8h] BYREF
  char v14; // [rsp+48h] [rbp-2F0h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-2E0h]

  result = RtlpQueryPackageIdentityAttributes(a1, a2, v15, a7);
  v11 = result;
  if ( (int)result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(
                 a2,
                 *a3,
                 (unsigned int)&v13,
                 (unsigned int)&v14,
                 2048,
                 (__int64)L"%wZ",
                 *(_QWORD *)(v16 + 32));
      v11 = result;
      if ( (int)result < 0 )
        return result;
      *a3 = v13 - a2 + 2;
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  if ( a3 )
    return 3221225485LL;
LABEL_7:
  if ( a4 )
  {
    result = RtlStringCbPrintfExW(a4, *a5, (unsigned int)&v13, 0, 2048, (__int64)L"%wZ", *(_QWORD *)(v16 + 32) + 16LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    *a5 = v13 - a4 + 2;
  }
  if ( a6 )
  {
    v12 = v16;
    *a6 = 0LL;
    a6[1] = 0LL;
    if ( *(_DWORD *)(v12 + 24) > 2u )
      RtlGUIDFromString(*(_QWORD *)(v12 + 32) + 32LL, a6);
  }
  return v11;
}
