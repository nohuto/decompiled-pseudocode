/*
 * XREFs of RtlStringCchCopyA @ 0x14013520C
 * Callers:
 *     AslpFileQueryExportName @ 0x140683120 (AslpFileQueryExportName.c)
 *     EmpParseStrings @ 0x1407600F4 (EmpParseStrings.c)
 * Callees:
 *     sub_14013524C @ 0x14013524C (sub_14013524C.c)
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return sub_14013524C((_DWORD)pszDest, cchDest, (_DWORD)pszSrc, (_DWORD)pszSrc, 2147483646LL);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
