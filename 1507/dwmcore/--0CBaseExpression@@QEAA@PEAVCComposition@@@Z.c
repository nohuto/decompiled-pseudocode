/*
 * XREFs of ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18010D50C
 * Callers:
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x18010EAD4 (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18011044C (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  CExpressionValue *v3; // rcx

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  v3 = (CBaseExpression *)((char *)this + 48);
  *(_DWORD *)v3 = 17;
  *((_BYTE *)v3 + 4) = 0;
  CExpressionValue::Reset(v3, 1);
  *((_QWORD *)this + 10) = -1LL;
  *((_QWORD *)this + 11) = -1LL;
  return this;
}
