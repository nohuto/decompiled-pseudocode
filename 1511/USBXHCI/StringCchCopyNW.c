/*
 * XREFs of StringCchCopyNW @ 0x1C003AFC0
 * Callers:
 *     WerKernelSubmitReport @ 0x1C003B2BC (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyNW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_PCNZWCH pszSrc, size_t cchToCopy)
{
  HRESULT v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 >= 0 )
  {
    if ( cchToCopy <= 0x7FFFFFFE )
    {
      v4 = 0;
      if ( !cchDest )
        goto LABEL_12;
      v5 = cchToCopy - cchDest;
      v6 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v5 + cchDest) )
          break;
        v7 = *(STRSAFE_LPWSTR)((char *)pszDest + v6);
        if ( !v7 )
          break;
        *pszDest++ = v7;
        --cchDest;
      }
      while ( cchDest );
      if ( !cchDest )
      {
LABEL_12:
        --pszDest;
        v4 = -2147024774;
      }
    }
    else
    {
      v4 = -2147024809;
    }
    goto LABEL_14;
  }
  if ( cchDest )
LABEL_14:
    *pszDest = 0;
  return v4;
}
