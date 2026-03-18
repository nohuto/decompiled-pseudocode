/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x1C001390C
 * Callers:
 *     RtlUnicodeStringCopy @ 0x1C0013864 (RtlUnicodeStringCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyWorker(
        wchar_t *pszDest,
        unsigned __int64 cchDest,
        unsigned __int64 *pcchNewDestLength,
        const wchar_t *pszSrc,
        unsigned __int64 cchSrcLength)
{
  unsigned int v5; // r10d
  const wchar_t *v6; // r11
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rcx
  unsigned __int64 v9; // r9

  v5 = 0;
  v6 = pszSrc;
  v7 = 0LL;
  if ( !cchDest )
  {
    v9 = cchSrcLength;
LABEL_8:
    if ( v9 )
      v5 = -2147483643;
    goto LABEL_6;
  }
  v8 = (char *)pszDest - (char *)pszSrc;
  v9 = cchSrcLength;
  do
  {
    if ( !v9 )
      break;
    --v9;
    *(const wchar_t *)((char *)v6 + v8) = *v6;
    ++v7;
    ++v6;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
    goto LABEL_8;
LABEL_6:
  *pcchNewDestLength = v7;
  return v5;
}
