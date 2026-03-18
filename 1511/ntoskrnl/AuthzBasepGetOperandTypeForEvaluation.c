/*
 * XREFs of AuthzBasepGetOperandTypeForEvaluation @ 0x14021B30C
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x14021AC48 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x14021B560 (AuthzBasepValueInSet.c)
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
