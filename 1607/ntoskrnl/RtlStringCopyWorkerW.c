/*
 * XREFs of RtlStringCopyWorkerW @ 0x140085004
 * Callers:
 *     RtlStringCchCopyNW @ 0x140084FB0 (RtlStringCchCopyNW.c)
 *     RtlStringCbCopyNW @ 0x140123470 (RtlStringCbCopyNW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  signed __int64 v7; // r10
  wchar_t v8; // r9

  result = 0;
  if ( !cchDest )
    goto LABEL_8;
  v7 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !cchToCopy )
      break;
    v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
    if ( !v8 )
      break;
    *pszDest = v8;
    --cchToCopy;
    ++pszDest;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
LABEL_8:
    --pszDest;
    result = -2147483643;
  }
  *pszDest = 0;
  return result;
}
