/*
 * XREFs of SbpParseFuncName @ 0x1800F63DC
 * Callers:
 *     SbpResolveBasedOnName @ 0x1800F6480 (SbpResolveBasedOnName.c)
 * Callees:
 *     StringCchCopyW @ 0x1800C82E0 (StringCchCopyW.c)
 *     StringCchCopyNW @ 0x1800F6534 (StringCchCopyNW.c)
 */

__int64 __fastcall SbpParseFuncName(wchar_t *pszSrc, STRSAFE_LPWSTR pszDest, __int64 a3, wchar_t *a4)
{
  wchar_t v4; // ax
  STRSAFE_PCNZWCH v5; // rdi
  unsigned int v8; // ebx

  v4 = *pszSrc;
  v5 = pszSrc;
  v8 = 0;
  while ( v4 && v4 != 33 )
    v4 = *++v5;
  if ( *v5 == 33
    && StringCchCopyNW(pszDest, (size_t)pszDest, pszSrc, v5 - pszSrc) >= 0
    && StringCchCopyW(a4, 0x400uLL, v5 + 1) >= 0 )
  {
    return 1;
  }
  else
  {
    if ( pszDest )
      *pszDest = 0;
    if ( a4 )
      *a4 = 0;
  }
  return v8;
}
