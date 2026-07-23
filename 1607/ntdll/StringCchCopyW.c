/*
 * XREFs of StringCchCopyW @ 0x1800D9190
 * Callers:
 *     EtwpAddInstanceIdToLogFileName @ 0x1800554E0 (EtwpAddInstanceIdToLogFileName.c)
 *     WerEscalationLazyInit @ 0x1800D9288 (WerEscalationLazyInit.c)
 *     SbpParseFuncName @ 0x1800FEB50 (SbpParseFuncName.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_10;
    v4 = 2147483646 - cchDest;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = *(STRSAFE_LPWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_10:
      --pszDest;
      v3 = -2147024774;
    }
    goto LABEL_12;
  }
  if ( cchDest )
LABEL_12:
    *pszDest = 0;
  return v3;
}
