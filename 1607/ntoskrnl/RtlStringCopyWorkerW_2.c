/*
 * XREFs of RtlStringCopyWorkerW_2 @ 0x14010AD94
 * Callers:
 *     RtlStringCbCopyExW @ 0x14010AC6C (RtlStringCbCopyExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW_2(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v5; // r11d
  size_t v6; // r10
  __int64 v7; // rax
  signed __int64 v8; // rbx
  wchar_t v9; // r9

  v5 = 0;
  v6 = 0LL;
  if ( !cchDest )
    goto LABEL_10;
  v7 = 2147483646LL;
  v8 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !v7 )
      break;
    v9 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
    if ( !v9 )
      break;
    *pszDest = v9;
    --v7;
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
