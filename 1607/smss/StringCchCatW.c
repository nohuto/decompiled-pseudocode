/*
 * XREFs of StringCchCatW @ 0x1400149C4
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140014634 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     StringCopyWorkerW @ 0x140014A8C (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT v3; // r9d
  size_t v5; // rcx
  STRSAFE_LPWSTR v6; // rax
  size_t v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
  {
    v5 = cchDest;
    v6 = pszDest;
    v3 = 0;
    if ( cchDest )
    {
      do
      {
        if ( !*v6 )
          break;
        ++v6;
        --v5;
      }
      while ( v5 );
      if ( v5 )
      {
        v7 = cchDest - v5;
        goto LABEL_11;
      }
    }
    v3 = -2147024809;
  }
  v7 = 0LL;
LABEL_11:
  if ( v3 >= 0 )
    return StringCopyWorkerW(&pszDest[v7], cchDest - v7, (size_t *)pszSrc, pszSrc, v9);
  return v3;
}
