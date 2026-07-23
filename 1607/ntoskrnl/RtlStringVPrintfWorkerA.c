/*
 * XREFs of RtlStringVPrintfWorkerA @ 0x140139FD4
 * Callers:
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x1401B0E60 (RtlStringCbPrintfExA.c)
 * Callees:
 *     _vsnprintf @ 0x14014D318 (_vsnprintf.c)
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  NTSTATUS v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = vsnprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 || v9 > v5 )
  {
    pszDest[v5] = 0;
    v8 = -2147483643;
  }
  else if ( v9 == v5 )
  {
    pszDest[v5] = 0;
  }
  else
  {
    v5 = v9;
  }
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
