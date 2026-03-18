/*
 * XREFs of AuthzBasepComputeExpression @ 0x140234E28
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009FBFC (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepComputeBitwise @ 0x140234DC8 (AuthzBasepComputeBitwise.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x140235674 (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140235780 (AuthzBasepOperandValueTypesCompatible.c)
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
