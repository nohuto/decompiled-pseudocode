/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x14026A79C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepCompareFQBNOperands @ 0x140269EE8 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14026A154 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14026A27C (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14026A3C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x14026A8F0 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x14026AE60 (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x14026AF6C (AuthzBasepOperandValueTypesCompatible.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, BOOL *a3)
{
  int v4; // ebx
  unsigned __int16 OperandTypeForEvaluation; // r14
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v4 = 0;
  *a3 = 0;
  OperandTypeForEvaluation = AuthzBasepGetOperandTypeForEvaluation(a2);
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible() )
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
            v8 = 2LL;
            goto LABEL_12;
          }
          if ( a1 != 0x8E )
          {
            if ( a1 != 0x8F )
              return (unsigned int)v4;
            goto LABEL_10;
          }
        }
        v8 = 1LL;
LABEL_12:
        v4 = AuthzBasepEvaluateSetRelationship(v8, a2, a3);
        if ( v4 < 0 )
          goto LABEL_31;
        goto LABEL_30;
      }
      if ( !OperandTypeForEvaluation )
        goto LABEL_2;
      if ( OperandTypeForEvaluation <= 2u )
      {
        v9 = AuthzBasepCompareIntegerOperands(a1, a2);
        goto LABEL_21;
      }
      switch ( OperandTypeForEvaluation )
      {
        case 3u:
          v10 = AuthzBasepCompareUnicodeStringOperands(a1, a2, a3);
          break;
        case 4u:
          v10 = AuthzBasepCompareFQBNOperands(a1, a2, a3);
          break;
        case 5u:
        case 0x10u:
          v9 = AuthzBasepCompareOctetStringOperands(a1, a2);
LABEL_21:
          *a3 = v9;
          return (unsigned int)v4;
        default:
LABEL_2:
          v4 = -1073741406;
LABEL_31:
          *a3 = -1;
          return (unsigned int)v4;
      }
      v4 = v10;
    }
LABEL_30:
    if ( v4 < 0 )
      goto LABEL_31;
  }
  return (unsigned int)v4;
}
