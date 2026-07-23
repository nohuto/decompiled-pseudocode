/*
 * XREFs of StringCbCatW @ 0x14022002C
 * Callers:
 *     SmUniqueIdParseProductName @ 0x14021FCA8 (SmUniqueIdParseProductName.c)
 * Callees:
 *     StringCopyWorkerW @ 0x14022010C (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCbCatW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v3; // rdx
  __int64 v4; // r8
  size_t v6; // rcx
  STRSAFE_LPWSTR v7; // rax
  size_t v8; // rax

  v3 = cbDest >> 1;
  v4 = 0LL;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = 2147942487LL;
  if ( (int)v4 >= 0 )
  {
    v6 = v3;
    v7 = pszDest;
    v4 = 0LL;
    if ( v3 )
    {
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v6;
      }
      while ( v6 );
      if ( v6 )
      {
        v8 = v3 - v6;
        goto LABEL_11;
      }
    }
    v4 = 2147942487LL;
  }
  v8 = 0LL;
LABEL_11:
  if ( (int)v4 >= 0 )
    LODWORD(v4) = StringCopyWorkerW(&pszDest[v8], v3 - v8, (size_t *)v4, L" ", 0x7FFFFFFEuLL);
  return v4;
}
