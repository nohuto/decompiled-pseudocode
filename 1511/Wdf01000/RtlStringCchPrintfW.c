/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0057748
 * Callers:
 *     LibraryRegisterClient @ 0x1C002CA90 (LibraryRegisterClient.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00577A0 (RtlStringVPrintfWorkerW.c)
 */

__int64 RtlStringCchPrintfW(wchar_t *pszDest, unsigned __int64 cchDest, wchar_t *pszFormat, ...)
{
  int v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    return (unsigned int)RtlStringVPrintfWorkerW(pszDest, cchDest, (unsigned __int64 *)pszFormat, pszFormat, va);
  }
  return (unsigned int)v3;
}
