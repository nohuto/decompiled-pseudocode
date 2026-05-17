/*
 * XREFs of StringCchCopyNW @ 0x1800FECA8
 * Callers:
 *     SbpParseFuncName @ 0x1800FEB50 (SbpParseFuncName.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyNW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_PCNZWCH pszSrc, size_t cchToCopy)
{
  HRESULT v6; // r8d
  __int64 v7; // r9
  signed __int64 v8; // r10
  wchar_t v9; // ax

  if ( cchToCopy <= 0x7FFFFFFE )
  {
    v7 = 256LL;
    v6 = 0;
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v7 + cchToCopy - 256) )
        break;
      v9 = *(STRSAFE_LPWSTR)((char *)pszDest + v8);
      if ( !v9 )
        break;
      *pszDest++ = v9;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
    {
      --pszDest;
      v6 = -2147024774;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  *pszDest = 0;
  return v6;
}
