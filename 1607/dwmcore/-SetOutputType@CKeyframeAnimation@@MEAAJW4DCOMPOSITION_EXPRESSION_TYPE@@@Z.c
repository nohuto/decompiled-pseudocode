/*
 * XREFs of ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180087290
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetOutputType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ebx

  v2 = (unsigned int)(a2 - 18);
  if ( (unsigned int)v2 <= 0x35 && (v3 = 0x38000400020001LL, _bittest64(&v3, v2)) )
  {
    *(_DWORD *)(a1 + 200) = a2;
    return 0;
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x79u);
  }
  return v4;
}
