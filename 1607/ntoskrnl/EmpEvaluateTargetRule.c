/*
 * XREFs of EmpEvaluateTargetRule @ 0x140008910
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x140147550 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x1403C8598 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140008ACC (EmpEvaluateNodeLink.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  _QWORD *PoolWithTag; // rdi
  __int64 v5; // r11
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r14
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  int v12; // r12d
  unsigned int v13; // edx
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  __int64 v16; // rax
  unsigned int i; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+50h] [rbp-58h]
  unsigned int v22; // [rsp+B0h] [rbp+8h]
  __int64 v25; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 8);
  PoolWithTag = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v25 = v3;
  v21 = v5;
  v7 = *(unsigned int *)(v3 + 40);
  v8 = 1;
  v9 = *(unsigned int *)(v3 + 44);
  if ( !__PAIR64__(v9, v7) )
  {
    v22 = 1;
    v10 = 0;
LABEL_8:
    v11 = v9 + v7;
    v12 = 0;
    do
    {
      v13 = 0;
      if ( (_DWORD)v7 )
      {
        v14 = EmpStringTable;
        v15 = PoolWithTag;
        do
        {
          v16 = v12 + v13++;
          *v15++ = v14[*(unsigned int *)(v5 + 4 * v16)];
        }
        while ( v13 < (unsigned int)v7 );
      }
      for ( i = v7; i < v11; v6[v19] = v18 )
      {
        v18 = *(_DWORD *)(v5 + 4LL * (v12 + i));
        v19 = i - (unsigned int)v7;
        ++i;
      }
      v8 = EmpEvaluateNodeLink(*(_QWORD *)(v3 + 96), (_DWORD)PoolWithTag, v7, (_DWORD)v6, v9, a2, a3, 0LL, 0);
      if ( v8 - 1 <= 1 )
        break;
      v3 = v25;
      ++v10;
      v5 = v21;
      v12 += v11;
    }
    while ( v10 < v22 );
    goto LABEL_16;
  }
  v22 = *(_DWORD *)(a1 + 24) / (unsigned int)(v9 + v7);
  if ( (_DWORD)v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x76654D45u);
    if ( !PoolWithTag )
      return v8;
  }
  if ( !(_DWORD)v9 || (v6 = ExAllocatePoolWithTag(PagedPool, 4 * v9, 0x76654D45u)) != 0LL )
  {
    v10 = 0;
    if ( v22 )
    {
      v3 = v25;
      v5 = v21;
      goto LABEL_8;
    }
  }
LABEL_16:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x76654D45u);
  return v8;
}
