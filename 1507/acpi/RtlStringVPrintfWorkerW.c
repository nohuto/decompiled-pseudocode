/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x1C00016D0
 * Callers:
 *     RtlStringCbPrintfExW @ 0x1C00015D0 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x1C001DB9C (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1C001DBF0 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x1C0036318 (RtlStringCbPrintfW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  NTSTATUS v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147483643;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_5;
  }
  pszDest[v5] = 0;
LABEL_5:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
