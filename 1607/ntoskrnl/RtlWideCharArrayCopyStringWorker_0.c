/*
 * XREFs of RtlWideCharArrayCopyStringWorker_0 @ 0x1401CD314
 * Callers:
 *     RtlUnicodeStringCopyString @ 0x1401CD280 (RtlUnicodeStringCopyString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker_0(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  const WCHAR *v6; // r9
  __int64 v7; // r10
  size_t v8; // r11

  result = 0;
  v6 = &word_1405841A0;
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( cchDest )
  {
    do
    {
      if ( !v7 )
        break;
      if ( !*v6 )
        break;
      *(const WCHAR *)((char *)v6 + (char *)pszDest - (char *)&word_1405841A0) = *v6;
      --v7;
      ++v6;
      ++v8;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest && v7 && *v6 )
      result = -2147483643;
  }
  *pcchNewDestLength = v8;
  return result;
}
