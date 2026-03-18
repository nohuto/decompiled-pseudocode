/*
 * XREFs of ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800AD048
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x18001A4C0 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089CA4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180147888 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18015CE30 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800AD0C8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::GetAsFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int ExpressionTypeChannelCount; // eax
  const void *v5; // rdx
  void *v6; // r9

  v3 = 0;
  *a3 = 0.0;
  if ( *((_BYTE *)this + 68) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)this + 16));
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1A9u);
    }
    else
    {
      memcpy_0(v6, v5, 4LL * ExpressionTypeChannelCount);
    }
  }
  else
  {
    v3 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1A0u);
  }
  return v3;
}
