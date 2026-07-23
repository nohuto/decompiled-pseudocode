/*
 * XREFs of StringCbPrintfA @ 0x1800D0748
 * Callers:
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 * Callees:
 *     _vsnprintf @ 0x180098180 (_vsnprintf.c)
 */

HRESULT StringCbPrintfA(STRSAFE_LPSTR pszDest, size_t cbDest, STRSAFE_LPCSTR pszFormat, ...)
{
  HRESULT v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cbDest - 1;
    v3 = 0;
    v6 = vsnprintf(pszDest, cbDest - 1, pszFormat, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
