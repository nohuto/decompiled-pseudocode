/*
 * XREFs of AuthzBasepGetOperandTypeForEvaluation @ 0x14026AE60
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x14026A79C (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x14026B0B4 (AuthzBasepValueInSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandTypeForEvaluation(unsigned __int16 *a1)
{
  if ( *((_DWORD *)a1 + 3) == 1 )
    return a1[20];
  else
    return *a1;
}
