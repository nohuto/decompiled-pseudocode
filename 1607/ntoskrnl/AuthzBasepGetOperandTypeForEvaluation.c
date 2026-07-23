/*
 * XREFs of AuthzBasepGetOperandTypeForEvaluation @ 0x1402354A0
 * Callers:
 *     AuthzBasepComputeExpression @ 0x140234C54 (AuthzBasepComputeExpression.c)
 *     AuthzBasepEvaluateExpression @ 0x140234DDC (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
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
