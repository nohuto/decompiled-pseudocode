/*
 * XREFs of ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ @ 0x18012C030
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18012BC60 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessExpressionKeyFrames(CKeyframeAnimation *this)
{
  __int64 v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( *((_DWORD *)this + 48) )
  {
    while ( 1 )
    {
      v3 = CBaseExpression::CalculateValue(
             *(CBaseExpression **)(*((_QWORD *)this + 21) + 8 * v1),
             *((struct CExpressionValueStack **)this + 30),
             *((_QWORD *)this + 10),
             &v6);
      v4 = v3;
      if ( v3 < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= *((_DWORD *)this + 48) )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4F0u);
  }
  else
  {
    return 0;
  }
  return v4;
}
