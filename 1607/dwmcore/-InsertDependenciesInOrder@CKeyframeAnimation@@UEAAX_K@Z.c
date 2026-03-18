/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800195E0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x180019CC0 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(CKeyframeAnimation *this, unsigned __int64 a2)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 42) + 8 * i), a2);
}
