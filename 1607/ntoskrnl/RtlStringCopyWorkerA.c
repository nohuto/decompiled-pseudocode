/*
 * XREFs of RtlStringCopyWorkerA @ 0x1400C76E8
 * Callers:
 *     RtlStringCbCopyA @ 0x1400C76AC (RtlStringCbCopyA.c)
 *     RtlStringCbCopyExA @ 0x14014BD0C (RtlStringCbCopyExA.c)
 *     RtlStringCbCatExA @ 0x1401B0DB0 (RtlStringCbCatExA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v5; // r11d
  size_t v6; // r10
  __int64 v7; // rax
  signed __int64 v8; // rbx
  char v9; // r9

  v5 = 0;
  v6 = 0LL;
  if ( !cchDest )
    goto LABEL_10;
  v7 = 2147483646LL;
  v8 = pszSrc - pszDest;
  do
  {
    if ( !v7 )
      break;
    v9 = pszDest[v8];
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
