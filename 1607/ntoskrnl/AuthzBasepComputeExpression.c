/*
 * XREFs of AuthzBasepComputeExpression @ 0x140234C54
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepComputeBitwise @ 0x140234BF4 (AuthzBasepComputeBitwise.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x1402354A0 (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402355AC (AuthzBasepOperandValueTypesCompatible.c)
 */

__int64 __fastcall AuthzBasepComputeExpression(char a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  *a3 = 0LL;
  if ( (unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2)
    && a1 == -93
    && (unsigned __int16)AuthzBasepGetOperandTypeForEvaluation(a2) == 2 )
  {
    *a3 = AuthzBasepComputeBitwise(163, a2);
  }
  else
  {
    return (unsigned int)-1073741406;
  }
  return v4;
}
