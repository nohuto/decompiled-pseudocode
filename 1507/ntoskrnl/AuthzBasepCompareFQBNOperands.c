/*
 * XREFs of AuthzBasepCompareFQBNOperands @ 0x140269EE8
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x14026A79C (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x14026B0B4 (AuthzBasepValueInSet.c)
 * Callees:
 *     RtlIsNameInExpression @ 0x1400F80F0 (RtlIsNameInExpression.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14011CC68 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepCompareUnsigned @ 0x14026A5FC (AuthzBasepCompareUnsigned.c)
 *     AuthzBasepGetConstantOperand @ 0x14026AC24 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x14026AE04 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareFQBNOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  int OperandStringCaseForEvaluation; // r14d
  unsigned int v9; // r13d
  UNICODE_STRING *p_Expression; // rdx
  __int64 *v11; // r12
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  UNICODE_STRING *v16; // rdx
  UNICODE_STRING *p_Name; // rcx
  BOOLEAN IsNameInExpression; // al
  __int64 v19; // rcx
  int v20; // eax
  _BYTE *v21; // rdi
  wchar_t **v22; // rsi
  _WORD v24[2]; // [rsp+20h] [rbp-A8h] BYREF
  BOOLEAN v25; // [rsp+24h] [rbp-A4h]
  unsigned int v26; // [rsp+28h] [rbp-A0h] BYREF
  UNICODE_STRING *v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  __int64 v29; // [rsp+40h] [rbp-88h]
  UNICODE_STRING Expression; // [rsp+48h] [rbp-80h] BYREF
  UNICODE_STRING Name; // [rsp+58h] [rbp-70h] BYREF
  _WORD v32[16]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD *v33; // [rsp+88h] [rbp-40h]
  char v36; // [rsp+E8h] [rbp+20h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  v24[0] = 0;
  v36 = 0;
  *a3 = 0;
  p_Buffer = &Expression.Buffer;
  v5 = 2LL;
  v6 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v6;
  }
  while ( v6 );
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v36);
  if ( OperandStringCaseForEvaluation >= 0 )
  {
    v9 = 0;
    p_Expression = &Expression;
    v27 = &Expression;
    v11 = &v28;
    v12 = (unsigned int *)(v7 + 24);
    do
    {
      if ( *(v12 - 3) == 1 )
      {
        if ( !*((_BYTE *)v12 - 20) )
        {
          OperandStringCaseForEvaluation = -1073741406;
          goto LABEL_4;
        }
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(*((_QWORD *)v12 + 1), *v12, v32, &v26);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        if ( v32[0] != 3 )
          goto LABEL_4;
        LOBYTE(v13) = v36 == 0;
        OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                           (__int64)v32,
                                           v13,
                                           &Expression.Length + 8 * v9,
                                           (_BYTE *)v24 + v9);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(*((_QWORD *)v12 + 1) + v26, *v12 - v26, v32, &v26);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        if ( v32[0] != 2 )
          goto LABEL_4;
        v14 = v33;
        *v11 = *v33;
        if ( *((_BYTE *)v14 + 8) == 2 )
          goto LABEL_4;
        p_Expression = v27;
      }
      else
      {
        v15 = *(_QWORD *)(*((_QWORD *)v12 - 1) + 40LL);
        *v11 = *(_QWORD *)v15;
        *p_Expression = *(UNICODE_STRING *)(v15 + 8);
      }
      ++v9;
      ++v11;
      v12 += 10;
      v27 = ++p_Expression;
    }
    while ( v9 < 2 );
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v16 = &Expression;
      p_Name = &Name;
    }
    else
    {
      v16 = &Name;
      p_Name = &Expression;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Name, v16, v36 == 0, 0LL);
    v25 = IsNameInExpression;
    *a3 = v28 == v29 && IsNameInExpression;
    LOBYTE(v19) = a1;
    if ( a1 == -127 )
    {
      v20 = *a3 != 1;
    }
    else
    {
      if ( a1 == (char)0x80 )
        goto LABEL_33;
      if ( !IsNameInExpression )
      {
        *a3 = 0;
        goto LABEL_33;
      }
      v20 = AuthzBasepCompareUnsigned(v19);
    }
    *a3 = v20;
  }
  else
  {
LABEL_4:
    *a3 = -1;
  }
LABEL_33:
  v21 = v24;
  v22 = &Expression.Buffer;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag(*v22, 0);
    ++v21;
    v22 += 2;
    --v5;
  }
  while ( v5 );
  return (unsigned int)OperandStringCaseForEvaluation;
}
