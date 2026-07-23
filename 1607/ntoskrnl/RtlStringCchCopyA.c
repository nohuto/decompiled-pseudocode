/*
 * XREFs of RtlStringCchCopyA @ 0x14013D2E4
 * Callers:
 *     AslpFileQueryExportName @ 0x1406C8DDC (AslpFileQueryExportName.c)
 *     EmpParseStrings @ 0x1407A83F0 (EmpParseStrings.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x14013D324 (RtlStringCopyWorkerA_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA_0(pszDest, cchDest, (size_t *)pszSrc, pszSrc, 0x7FFFFFFEuLL);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
