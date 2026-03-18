/*
 * XREFs of ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ @ 0x180086954
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 */

void __fastcall CKeyframeAnimation::ProcessExpressionKeyFrames(CKeyframeAnimation *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
    CBaseExpression::CalculateValue(
      *(CBaseExpression **)(*((_QWORD *)this + 42) + 8 * i),
      *((struct CExpressionValueStack **)this + 50),
      *((_QWORD *)this + 27));
}
