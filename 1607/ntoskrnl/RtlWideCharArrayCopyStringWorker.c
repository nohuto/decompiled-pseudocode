/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1401B57E4
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1401B5738 (RtlUnicodeStringCatString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  const wchar_t *v6; // r9
  __int64 v7; // r10
  size_t v8; // r11

  result = 0;
  v6 = L"\\";
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( !cchDest )
    goto LABEL_8;
  do
  {
    if ( !v7 )
      break;
    if ( !*v6 )
      break;
    *(const wchar_t *)((char *)v6 + (char *)pszDest - (char *)L"\\") = *v6;
    --v7;
    ++v6;
    ++v8;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest && v7 && *v6 )
LABEL_8:
    result = -2147483643;
  *pcchNewDestLength = v8;
  return result;
}
