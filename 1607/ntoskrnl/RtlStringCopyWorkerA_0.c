/*
 * XREFs of RtlStringCopyWorkerA_0 @ 0x14013D324
 * Callers:
 *     RtlStringCchCopyA @ 0x14013D2E4 (RtlStringCchCopyA.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407A8814 (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA_0(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v5; // r8d
  signed __int64 v7; // r10
  char v8; // r9

  v5 = 0;
  if ( !cchDest )
    goto LABEL_8;
  v7 = pszSrc - pszDest;
  do
  {
    if ( !cchToCopy )
      break;
    v8 = pszDest[v7];
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
    v5 = -2147483643;
  }
  *pszDest = 0;
  return v5;
}
