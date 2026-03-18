/*
 * XREFs of ?InsertDependenciesInOrder@CScrollPositionAnimation@@MEAAX_K@Z @ 0x18015FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z @ 0x180110740 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z.c)
 */

void __fastcall CScrollPositionAnimation::InsertDependenciesInOrder(CScrollPositionAnimation *this, __int64 a2)
{
  __int64 *v2; // rax
  int v3; // ebx
  __int64 v6; // rax
  int v7; // r14d
  unsigned int *v8; // rsi
  int v9; // r15d
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v2 = (__int64 *)*((_QWORD *)this + 54);
  v3 = 0;
  if ( v2 )
    v6 = *v2;
  else
    v6 = 0LL;
  v7 = *(_DWORD *)(v6 + 368);
  v8 = (unsigned int *)&v10;
  v9 = *(_DWORD *)(v6 + 372);
  v10 = 19;
  v11 = 22;
  do
  {
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL),
      a2,
      v7,
      v9,
      *v8);
    ++v3;
    ++v8;
  }
  while ( (unsigned __int64)v3 < 2 );
}
