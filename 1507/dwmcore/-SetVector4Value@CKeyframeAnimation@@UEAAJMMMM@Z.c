/*
 * XREFs of ?SetVector4Value@CKeyframeAnimation@@UEAAJMMMM@Z @ 0x180111650
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x180101B88 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetVector4Value(
        CKeyframeAnimation *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  CExpressionValueStack *v5; // rcx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (CExpressionValueStack *)*((_QWORD *)this + 13);
  *(float *)&v7[3] = a5;
  *(float *)v7 = a2;
  *(float *)&v7[1] = a3;
  *(float *)&v7[2] = a4;
  CExpressionValueStack::PushConstant(v5, (const struct D2DVector4 *)v7);
  return 0LL;
}
