/*
 * XREFs of ?SetVector3Value@CKeyframeAnimation@@UEAAJMMM@Z @ 0x18012C450
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18011DE64 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetVector3Value(CKeyframeAnimation *this, float a2, float a3, float a4)
{
  CExpressionValueStack *v4; // rcx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (CExpressionValueStack *)*((_QWORD *)this + 13);
  *(float *)v6 = a2;
  *(float *)&v6[1] = a3;
  *(float *)&v6[2] = a4;
  CExpressionValueStack::PushConstant(v4, (const struct D2DVector3 *)v6);
  return 0LL;
}
