/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x140234DDC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x1402346F0 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140234818 (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x140234F30 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x1402354A0 (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402355AC (AuthzBasepOperandValueTypesCompatible.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, BOOL *a3)
{
  int v4; // ebx
  unsigned __int16 OperandTypeForEvaluation; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax

  v4 = 0;
  *a3 = 0;
  OperandTypeForEvaluation = AuthzBasepGetOperandTypeForEvaluation(a2);
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(v8) )
    goto LABEL_2;
  if ( a1 >= 0x80u )
  {
    if ( a1 <= 0x81u )
    {
      v4 = AuthzBasepEvaluateSetRelationship(0LL, a2, a3);
      if ( v4 < 0 )
        goto LABEL_31;
      if ( a1 == 0x81 && *a3 != -1 )
        *a3 = !*a3;
    }
    else
    {
      if ( a1 > 0x85u )
      {
        if ( a1 != 0x86 )
        {
          if ( a1 == 0x88 )
          {
LABEL_10:
            v9 = 2LL;
            goto LABEL_12;
          }
          if ( a1 != 0x8E )
          {
            if ( a1 != 0x8F )
              return (unsigned int)v4;
            goto LABEL_10;
          }
        }
        v9 = 1LL;
LABEL_12:
        v4 = AuthzBasepEvaluateSetRelationship(v9, a2, a3);
        if ( v4 < 0 )
          goto LABEL_31;
        goto LABEL_30;
      }
      if ( !OperandTypeForEvaluation )
        goto LABEL_2;
      if ( OperandTypeForEvaluation <= 2u )
      {
        v10 = AuthzBasepCompareIntegerOperands(a1, a2);
        goto LABEL_21;
      }
      switch ( OperandTypeForEvaluation )
      {
        case 3u:
          v11 = AuthzBasepCompareUnicodeStringOperands(a1, a2, a3);
          break;
        case 4u:
          v11 = AuthzBasepCompareFQBNOperands(a1, a2, a3);
          break;
        case 5u:
        case 0x10u:
          v10 = AuthzBasepCompareOctetStringOperands(a1, a2);
LABEL_21:
          *a3 = v10;
          return (unsigned int)v4;
        default:
LABEL_2:
          v4 = -1073741406;
LABEL_31:
          *a3 = -1;
          return (unsigned int)v4;
      }
      v4 = v11;
    }
LABEL_30:
    if ( v4 < 0 )
      goto LABEL_31;
  }
  return (unsigned int)v4;
}
