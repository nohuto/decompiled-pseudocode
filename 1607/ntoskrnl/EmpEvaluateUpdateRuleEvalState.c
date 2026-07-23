/*
 * XREFs of EmpEvaluateUpdateRuleEvalState @ 0x140147550
 * Callers:
 *     EmpUpdateRuleState @ 0x140009078 (EmpUpdateRuleState.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x140008910 (EmpEvaluateTargetRule.c)
 *     EmpEvaluatePermuteRuleEntries @ 0x1401475FC (EmpEvaluatePermuteRuleEntries.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall EmpEvaluateUpdateRuleEvalState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  char *PoolWithTag; // rbp
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rsi
  _QWORD **v10; // rcx
  _QWORD *v11; // r14
  __int64 i; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = a2;
  v7 = *(unsigned int *)(v2 + 48);
  if ( *(_BYTE *)(v2 + 20) )
  {
    v8 = 0;
    if ( (_DWORD)v7 )
    {
      v9 = 0LL;
      do
      {
        v10 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v9) + 56LL);
        if ( *v10 != v10 )
        {
          v11 = *v10;
          while ( v11 != v10 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))*(v11 - 2))(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v9), *(v11 - 1));
            v11 = (_QWORD *)*v11;
            v10 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v9) + 56LL);
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v9) + 40LL) == *(_QWORD *)(*(_QWORD *)(v2 + 56) + v9) + 40LL )
        {
          *(_DWORD *)(v2 + 16) = 0;
          return;
        }
        ++v8;
        v9 += 8LL;
      }
      while ( v8 < (unsigned int)v7 );
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x76654D45u);
      if ( PoolWithTag )
      {
        v5 = a2;
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 48); i = (unsigned int)(i + 1) )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * i);
          if ( v13 != a2 )
            *(_QWORD *)(v13 + 32) = *(_QWORD *)(v13 + 40);
        }
        goto LABEL_21;
      }
    }
    else
    {
      while ( (unsigned int)EmpEvaluateTargetRule(a1, (__int64)PoolWithTag, v7) != 2 )
      {
        if ( (unsigned __int8)EmpEvaluatePermuteRuleEntries(v2, (unsigned int)v7, v5, 0LL) )
          goto LABEL_5;
LABEL_21:
        if ( (_DWORD)v7 )
        {
          v14 = 0LL;
          v15 = v7;
          do
          {
            *(_QWORD *)&PoolWithTag[v14] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 56) + v14) + 32LL) - 16LL;
            v14 += 8LL;
            --v15;
          }
          while ( v15 );
        }
      }
      v3 = 2;
LABEL_5:
      *(_DWORD *)(v2 + 16) = v3;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 16) = 1;
  }
}
