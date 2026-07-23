/*
 * XREFs of StringCopyWorkerW @ 0x18005A830
 * Callers:
 *     _ResGetSystemWindowsDirectory @ 0x18005A6AC (_ResGetSystemWindowsDirectory.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18005A7B0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  HRESULT result; // eax
  __int64 v6; // r8
  signed __int64 v7; // r10
  wchar_t v8; // r9

  result = 0;
  if ( !cchDest )
    goto LABEL_8;
  v6 = 2147483646LL;
  v7 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !v6 )
      break;
    v8 = *(STRSAFE_LPWSTR)((char *)pszDest + v7);
    if ( !v8 )
      break;
    *pszDest = v8;
    --v6;
    ++pszDest;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
LABEL_8:
    --pszDest;
    result = -2147024774;
  }
  *pszDest = 0;
  return result;
}
