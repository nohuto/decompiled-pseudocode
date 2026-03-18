/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x1800868C0
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800194EC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(CKeyframeAnimation *this)
{
  __int64 i; // rdi
  unsigned int v3; // edi
  int v5; // eax

  if ( (*((_BYTE *)this + 452) & 4) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
      CBaseExpression::CalculateValue(
        *(CBaseExpression **)(*((_QWORD *)this + 42) + 8 * i),
        *((struct CExpressionValueStack **)this + 50),
        *((_QWORD *)this + 27));
    if ( *((_QWORD *)this + 41) )
    {
      v5 = CKeyframeAnimation::SampleStartingValue(this);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7DDu);
        return v3;
      }
    }
    *((_BYTE *)this + 452) |= 4u;
  }
  return 0;
}
