/*
 * XREFs of StringCchCopyW @ 0x14001416C
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140013D5C (GetFinalPathNameByHandleW.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1400141B4 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
    return StringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v5);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
