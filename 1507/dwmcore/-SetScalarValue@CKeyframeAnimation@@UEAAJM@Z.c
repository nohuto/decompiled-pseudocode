/*
 * XREFs of ?SetScalarValue@CKeyframeAnimation@@UEAAJM@Z @ 0x1801115D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180101D00 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetScalarValue(CExpressionValueStack **this, float a2)
{
  CExpressionValueStack::PushConstant(this[13], a2);
  return 0LL;
}
