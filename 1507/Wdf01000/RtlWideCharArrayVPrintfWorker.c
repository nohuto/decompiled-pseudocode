/*
 * XREFs of RtlWideCharArrayVPrintfWorker @ 0x1C002C374
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x1C002C30C (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf @ 0x1C0030DC8 (_vsnwprintf.c)
 */

__int64 __fastcall RtlWideCharArrayVPrintfWorker(
        unsigned __int16 *pszDest,
        unsigned __int64 cchDest,
        unsigned __int64 *pcchNewDestLength,
        const wchar_t *pszFormat,
        char *argList)
{
  unsigned int v7; // ebx
  int v8; // eax

  v7 = 0;
  v8 = vsnwprintf(pszDest, cchDest, pszFormat, argList);
  if ( v8 < 0 || v8 > cchDest )
  {
    *pcchNewDestLength = cchDest;
    return (unsigned int)-2147483643;
  }
  else
  {
    *pcchNewDestLength = v8;
  }
  return v7;
}
