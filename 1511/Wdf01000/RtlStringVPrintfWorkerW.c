/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x1C00577A0
 * Callers:
 *     RtlStringCchPrintfW @ 0x1C0057748 (RtlStringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf @ 0x1C0035B48 (_vsnwprintf.c)
 */

__int64 __fastcall RtlStringVPrintfWorkerW(
        unsigned __int16 *pszDest,
        unsigned __int64 cchDest,
        unsigned __int64 *pszFormat,
        const wchar_t *argList,
        char *pszDest_0)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = vsnwprintf(pszDest, cchDest - 1, argList, pszDest_0);
  if ( v8 < 0 || v8 > v5 )
  {
    pszDest[v5] = 0;
    return (unsigned int)-2147483643;
  }
  else if ( v8 == v5 )
  {
    pszDest[v5] = 0;
  }
  return v7;
}
