/*
 * XREFs of ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180136A40
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x18011F1A0 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180128F90 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18013665C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011B7B8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValue::GetAsFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int ExpressionTypeChannelCount; // eax
  int v5; // edx
  __int64 v6; // r9
  _DWORD *v7; // r10
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int128 *v15; // rdx
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v3 = 0;
  *a3 = 0.0;
  if ( *((_BYTE *)this + 4) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)this);
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v17 = 590;
LABEL_14:
      v3 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v17);
      return v3;
    }
    v8 = v5 - 18;
    if ( !v8 )
    {
      *v7 = *(_DWORD *)(v6 + 8);
      return v3;
    }
    v9 = v8 - 17;
    if ( v9 && (v10 = v9 - 17) != 0 && (v11 = v10 - 17) != 0 && (v12 = v11 - 1) != 0 && (v13 = v12 - 1) != 0 )
    {
      v14 = v13 - 33;
      if ( v14 )
      {
        if ( v14 != 161 )
        {
          v17 = 660;
          goto LABEL_14;
        }
        v15 = *(__int128 **)(v6 + 8);
        if ( !v15 )
        {
          if ( (dword_1801A4250 & 2) == 0 )
            dword_1801A4250 |= 2u;
          v15 = (__int128 *)&unk_1801A4270;
        }
      }
      else
      {
        v15 = *(__int128 **)(v6 + 8);
        if ( !v15 )
        {
          if ( (dword_1801A4250 & 1) == 0 )
          {
            dword_1801A4268 = 0;
            dword_1801A426C = 0;
            dword_1801A4250 |= 1u;
            xmmword_1801A4258 = _xmm;
          }
          v15 = &xmmword_1801A4258;
        }
      }
    }
    else
    {
      v15 = (__int128 *)(v6 + 8);
    }
    memcpy_0(v7, v15, 4LL * ExpressionTypeChannelCount);
    return v3;
  }
  v3 = -2147023728;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x241u);
  return v3;
}
