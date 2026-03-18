/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x14021A86C
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x14021AC48 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x14021B560 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400066A8 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x1400C2CC0 (RtlIsNameInExpression.c)
 *     AuthzBasepCompareUnicodeStringCaseSensitive @ 0x14021A818 (AuthzBasepCompareUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14021AC1C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x14021B2B0 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(char a1, __int64 a2, BOOL *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // eax
  unsigned int v9; // r14d
  int v10; // r13d
  UNICODE_STRING *p_String1; // rdx
  __int64 v12; // r12
  BOOLEAN v13; // al
  UNICODE_STRING *v14; // rdx
  UNICODE_STRING *p_String2; // rcx
  int v16; // eax
  BOOL v17; // eax
  __int64 v18; // rdi
  wchar_t **v19; // rsi
  _WORD v21[2]; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+24h] [rbp-44h]
  UNICODE_STRING *v23; // [rsp+28h] [rbp-40h]
  UNICODE_STRING String1; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-28h] BYREF
  char v26; // [rsp+88h] [rbp+20h] BYREF

  v21[0] = 0;
  p_Buffer = &String1.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v26);
  v22 = OperandStringCaseForEvaluation;
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_4:
    *a3 = -1;
    v9 = OperandStringCaseForEvaluation;
    goto LABEL_38;
  }
  v10 = 0;
  p_String1 = &String1;
  v23 = &String1;
  v12 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v12 - 4) == 1 || !v26 )
    {
      OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                         a2 + 40LL * v10,
                                         v26 == 0,
                                         &String1.Length + 8 * v10,
                                         (_BYTE *)v21 + v10);
      v22 = OperandStringCaseForEvaluation;
      if ( OperandStringCaseForEvaluation < 0 )
        goto LABEL_4;
      p_String1 = v23;
    }
    else
    {
      *p_String1 = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v12 + 40LL);
    }
    ++v10;
    v12 += 40LL;
    v23 = ++p_String1;
  }
  while ( v10 < 2 );
  if ( (unsigned __int8)(a1 + 0x80) > 1u )
  {
    if ( v26 )
      v16 = AuthzBasepCompareUnicodeStringCaseSensitive(&String1.Length, &String2.Length);
    else
      v16 = RtlCompareUnicodeString(&String1, &String2, 1u);
    *a3 = v16;
    switch ( a1 )
    {
      case -126:
        v17 = *a3 < 0;
        break;
      case -125:
        v17 = *a3 <= 0;
        break;
      case -124:
        v17 = *a3 > 0;
        break;
      case -123:
        v17 = *a3 >= 0;
        break;
      default:
        goto LABEL_37;
    }
    *a3 = v17;
LABEL_37:
    v9 = v22;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v14 = &String1;
      p_String2 = &String2;
    }
    else
    {
      v14 = &String2;
      p_String2 = &String1;
    }
    *a3 = RtlIsNameInExpression(p_String2, v14, v26 == 0, 0LL);
  }
  else
  {
    if ( v26 )
      v13 = AuthzBasepEqualUnicodeStringCaseSensitive(&String1, &String2);
    else
      v13 = RtlEqualUnicodeString(&String1, &String2, 1u);
    *a3 = v13;
  }
  v9 = v22;
  if ( a1 == -127 )
    *a3 = !*a3;
LABEL_38:
  v18 = 0LL;
  v19 = &String1.Buffer;
  do
  {
    if ( *((_BYTE *)v21 + v18) )
      ExFreePoolWithTag(*v19, 0);
    ++v18;
    v19 += 2;
  }
  while ( v18 < 2 );
  return v9;
}
