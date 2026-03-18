/*
 * XREFs of AuthzBasepGetOperandTypeForEvaluation @ 0x140235674
 * Callers:
 *     AuthzBasepComputeExpression @ 0x140234E28 (AuthzBasepComputeExpression.c)
 *     AuthzBasepEvaluateExpression @ 0x140234FB0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402358C8 (AuthzBasepValueInSet.c)
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
