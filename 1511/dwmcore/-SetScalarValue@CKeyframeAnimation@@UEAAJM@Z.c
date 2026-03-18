/*
 * XREFs of ?SetScalarValue@CKeyframeAnimation@@UEAAJM@Z @ 0x18012C400
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18011E0E4 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetScalarValue(CExpressionValueStack **this, float a2)
{
  CExpressionValueStack::PushConstant(this[13], a2);
  return 0LL;
}
