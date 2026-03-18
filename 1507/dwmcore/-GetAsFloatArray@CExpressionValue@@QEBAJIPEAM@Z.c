/*
 * XREFs of ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18012122C
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18010DF68 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180100FB4 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValue::GetAsFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int ExpressionTypeChannelCount; // eax
  _DWORD *v5; // rdx
  _DWORD *v6; // r9
  __int128 *v7; // rdx
  size_t v8; // r8
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = 0;
  *a3 = 0.0;
  if ( *((_BYTE *)this + 4) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)this);
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v10 = 467;
LABEL_12:
      v3 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v10);
      return v3;
    }
    if ( *v5 == 17 )
    {
      *v6 = v5[2];
      return v3;
    }
    if ( *v5 == 34 || *v5 == 51 || *v5 == 68 )
    {
      v8 = 4LL * ExpressionTypeChannelCount;
      v7 = (__int128 *)(v5 + 2);
    }
    else
    {
      if ( *v5 == 101 )
      {
        v7 = (__int128 *)*((_QWORD *)v5 + 1);
        if ( !v7 )
        {
          if ( (dword_1801965E0 & 1) == 0 )
          {
            dword_180196600 = 0;
            dword_180196604 = 0;
            dword_1801965E0 |= 1u;
            xmmword_1801965F0 = _xmm;
          }
          v8 = 4LL * ExpressionTypeChannelCount;
          v7 = &xmmword_1801965F0;
          goto LABEL_24;
        }
      }
      else
      {
        if ( *v5 != 262 )
        {
          v10 = 526;
          goto LABEL_12;
        }
        v7 = (__int128 *)*((_QWORD *)v5 + 1);
        if ( !v7 )
        {
          if ( (dword_1801965E0 & 2) == 0 )
            dword_1801965E0 |= 2u;
          v8 = 4LL * ExpressionTypeChannelCount;
          v7 = (__int128 *)&unk_180196610;
          goto LABEL_24;
        }
      }
      v8 = 4LL * ExpressionTypeChannelCount;
    }
LABEL_24:
    memcpy_0(v6, v7, v8);
    return v3;
  }
  v3 = -2147023728;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1C6u);
  return v3;
}
