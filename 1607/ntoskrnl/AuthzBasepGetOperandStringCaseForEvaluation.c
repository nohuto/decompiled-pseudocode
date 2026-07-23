/*
 * XREFs of AuthzBasepGetOperandStringCaseForEvaluation @ 0x140235444
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandStringCaseForEvaluation(__int64 a1, bool *a2)
{
  __int64 v2; // rax
  bool v3; // al

  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 56);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 52) != 1 )
    {
      *a2 = (*(_DWORD *)(v2 + 28) & 2) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 28LL) & 2) != 0;
      goto LABEL_9;
    }
  }
  *a2 = *(_BYTE *)(v2 + 28) & 2;
LABEL_9:
  v3 = KeGetCurrentIrql() >= 2u;
  if ( *a2 || !v3 )
    return 0LL;
  else
    return 3221225659LL;
}
