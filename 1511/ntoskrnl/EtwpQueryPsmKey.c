/*
 * XREFs of EtwpQueryPsmKey @ 0x14065FCFC
 * Callers:
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14065FC3C (EtwpGetPsmKeyExtendedHeaderItem.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x1400FB2E4 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x1400FB3B0 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpQueryPsmKey(int a1, wchar_t *a2, size_t *a3)
{
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp-2F0h]
  int v7; // [rsp+38h] [rbp-2F0h]
  int v8; // [rsp+48h] [rbp-2E0h]
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+60h] [rbp-2C8h] BYREF
  _BYTE v10[8]; // [rsp+70h] [rbp-2B8h] BYREF
  __int64 v11; // [rsp+78h] [rbp-2B0h]

  result = RtlpQueryPackageIdentityAttributes(a1, (__int64)a2, (__int64)v10, 0LL);
  if ( (int)result >= 0 )
  {
    if ( *(_DWORD *)(v11 + 24) <= 2u )
    {
      v7 = 43;
      LODWORD(result) = RtlStringCbPrintfExW(
                          a2,
                          *a3,
                          ppszDestEnd,
                          0LL,
                          0x800u,
                          L"%wZ%wc%wZ",
                          *(_QWORD *)(v11 + 32),
                          v7,
                          *(_QWORD *)(v11 + 32) + 16LL);
    }
    else
    {
      v8 = 35;
      v6 = 43;
      LODWORD(result) = RtlStringCbPrintfExW(
                          a2,
                          *a3,
                          ppszDestEnd,
                          0LL,
                          0x800u,
                          L"%wZ%wc%wZ%wc%wZ",
                          *(_QWORD *)(v11 + 32),
                          v6,
                          *(_QWORD *)(v11 + 32) + 16LL,
                          v8,
                          *(_QWORD *)(v11 + 32) + 32LL);
    }
    if ( (int)result >= 0 )
      *a3 = (char *)ppszDestEnd[0] - (char *)a2 + 2;
    return (unsigned int)result;
  }
  return result;
}
