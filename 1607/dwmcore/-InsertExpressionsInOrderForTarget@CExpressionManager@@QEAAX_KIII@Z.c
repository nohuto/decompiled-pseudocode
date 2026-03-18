/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z @ 0x180110740
 * Callers:
 *     ?InsertDependenciesInOrder@CScrollScaleAnimation@@MEAAX_K@Z @ 0x18015F430 (-InsertDependenciesInOrder@CScrollScaleAnimation@@MEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CScrollPositionAnimation@@MEAAX_K@Z @ 0x18015FB70 (-InsertDependenciesInOrder@CScrollPositionAnimation@@MEAAX_K@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x180019CC0 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x1800B8798 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 */

void __fastcall CExpressionManager::InsertExpressionsInOrderForTarget(
        CExpressionManager *this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _QWORD *Element; // rax
  __int64 v7; // rbx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = a3;
  v8[1] = a4;
  v8[2] = a5;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 312),
              v8);
  if ( Element )
    v7 = Element[2];
  else
    v7 = 0LL;
  while ( v7 )
  {
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(v7 + 8), a2);
    v7 = *(_QWORD *)(v7 + 16);
  }
}
