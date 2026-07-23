/*
 * XREFs of EmpUpdateRuleState @ 0x140009078
 * Callers:
 *     EmpUpdateRuleState @ 0x140009078 (EmpUpdateRuleState.c)
 *     EmpRuleUpdateWorkerThread @ 0x140146C30 (EmpRuleUpdateWorkerThread.c)
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x140009024 (EmpSearchTargetRuleList.c)
 *     EmpUpdateRuleState @ 0x140009078 (EmpUpdateRuleState.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x140147550 (EmpEvaluateUpdateRuleEvalState.c)
 */

_QWORD *__fastcall EmpUpdateRuleState(__int64 a1)
{
  _QWORD *result; // rax
  unsigned int v2; // r9d
  __int64 v3; // r8
  int v4; // ebp
  char v6; // di
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  __int64 v9; // r11
  _QWORD *v10; // rsi
  _QWORD *k; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  v6 = 1;
  if ( v2 )
  {
    while ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3) + 16LL) > 0 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v2 )
        goto LABEL_2;
    }
LABEL_5:
    v6 = 0;
  }
  else
  {
LABEL_2:
    for ( i = *(_QWORD **)(a1 + 64); i; i = (_QWORD *)*i )
    {
      result = (_QWORD *)*(i - 1);
      if ( !result[2] )
        goto LABEL_5;
    }
    for ( j = *(_QWORD **)(a1 + 72); j; j = (_QWORD *)*j )
    {
      result = (_QWORD *)*(j - 1);
      if ( !*((_BYTE *)result + 20) )
        goto LABEL_5;
    }
  }
  if ( *(_BYTE *)(a1 + 20) != v6 )
  {
    v10 = *(_QWORD **)(a1 + 32);
    for ( *(_BYTE *)(a1 + 20) = v6; v10; v10 = (_QWORD *)*v10 )
      result = (_QWORD *)EmpUpdateRuleState(*(v10 - 1), 0LL, v3);
  }
  *(_BYTE *)(a1 + 20) = v6;
  if ( v6 )
  {
    if ( v4 == 1 )
      *(_DWORD *)(a1 + 16) = 0;
    result = EmpSearchTargetRuleList(a1);
    if ( result && *(int *)result > 0 )
      result = (_QWORD *)EmpEvaluateUpdateRuleEvalState(result, v9);
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( *(_DWORD *)(a1 + 16) != v4 )
  {
    for ( k = *(_QWORD **)(a1 + 80); k != (_QWORD *)(a1 + 80); k = (_QWORD *)*k )
      result = (_QWORD *)((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))*(k - 2))(
                           *(unsigned int *)(a1 + 16),
                           a1,
                           *(k - 1));
  }
  return result;
}
