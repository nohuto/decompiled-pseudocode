/*
 * XREFs of RtlStringCopyWorkerW @ 0x1C00272E8
 * Callers:
 *     RtlStringCchCopyNExW @ 0x1C0027258 (RtlStringCchCopyNExW.c)
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
  NTSTATUS v6; // r11d
  size_t v7; // r10
  signed __int64 v8; // rbx
  wchar_t v9; // r9

  v6 = 0;
  v7 = 0LL;
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
    ++v7;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
    --pszDest;
    v6 = -2147483643;
    --v7;
  }
  *pszDest = 0;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v7;
  return v6;
}
