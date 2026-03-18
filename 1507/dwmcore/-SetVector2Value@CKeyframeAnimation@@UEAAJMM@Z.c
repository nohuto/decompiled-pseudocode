/*
 * XREFs of ?SetVector2Value@CKeyframeAnimation@@UEAAJMM@Z @ 0x1801115F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180101A80 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetVector2Value(CKeyframeAnimation *this, float a2, float a3)
{
  CExpressionValueStack *v3; // rcx
  float v5; // [rsp+30h] [rbp+8h] BYREF
  float v6; // [rsp+34h] [rbp+Ch]

  v3 = (CExpressionValueStack *)*((_QWORD *)this + 13);
  v5 = a2;
  v6 = a3;
  CExpressionValueStack::PushConstant(v3, (const struct D2DVector2 *)&v5);
  return 0LL;
}
