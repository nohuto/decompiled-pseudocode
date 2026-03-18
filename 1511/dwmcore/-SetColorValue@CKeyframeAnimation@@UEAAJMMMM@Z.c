/*
 * XREFs of ?SetColorValue@CKeyframeAnimation@@UEAAJMMMM@Z @ 0x18012C380
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18011DFE8 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetColorValue(
        CKeyframeAnimation *this,
        D3DVALUE a2,
        D3DVALUE a3,
        D3DVALUE a4,
        D3DVALUE a5)
{
  CExpressionValueStack *v5; // rcx
  struct _D3DCOLORVALUE v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = (CExpressionValueStack *)*((_QWORD *)this + 13);
  v7.a = a5;
  v7.r = a2;
  v7.g = a3;
  v7.b = a4;
  CExpressionValueStack::PushConstant(v5, &v7);
  return 0LL;
}
