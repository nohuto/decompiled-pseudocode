/*
 * XREFs of RtlStringCopyWorkerW @ 0x1400AA728
 * Callers:
 *     RtlStringCbCopyNExW @ 0x1400AA68C (RtlStringCbCopyNExW.c)
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
  NTSTATUS v5; // r11d
  size_t v6; // r10
  signed __int64 v8; // rbx
  wchar_t v9; // r9

  v5 = 0;
  v6 = 0LL;
  if ( !cchDest )
    goto LABEL_10;
  v8 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !cchToCopy )
      break;
    v9 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
    if ( !v9 )
      break;
    *pszDest = v9;
    --cchToCopy;
    ++pszDest;
    ++v6;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
LABEL_10:
    --pszDest;
    v5 = -2147483643;
    --v6;
  }
  *pszDest = 0;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v6;
  return v5;
}
