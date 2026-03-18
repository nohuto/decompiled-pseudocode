/*
 * XREFs of RtlStringCchCopyA @ 0x140161954
 * Callers:
 *     AslpFileQueryExportName @ 0x140707DC4 (AslpFileQueryExportName.c)
 *     EmpParseStrings @ 0x1407CE96C (EmpParseStrings.c)
 * Callees:
 *     sub_140161994 @ 0x140161994 (sub_140161994.c)
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return sub_140161994((_DWORD)pszDest, cchDest, (_DWORD)pszSrc, (_DWORD)pszSrc, 2147483646LL);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
