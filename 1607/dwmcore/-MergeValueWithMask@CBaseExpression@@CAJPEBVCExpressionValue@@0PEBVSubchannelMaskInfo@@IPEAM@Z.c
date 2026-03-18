/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180147888
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800199A0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089CA4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800AD048 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800AD0C8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *this,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        __int64 a4,
        float *a5)
{
  int v7; // ecx
  int v9; // r9d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int AsFloatArray; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v20; // [rsp+20h] [rbp-88h]
  float v21; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v22[60]; // [rsp+34h] [rbp-74h] BYREF

  v7 = *((_DWORD *)this + 16);
  if ( *(_DWORD *)a3 == 1 )
  {
    v10 = (unsigned int)(v7 - 18);
    if ( (unsigned int)v10 > 0x33 || (v11 = 0x8000400020001LL, !_bittest64(&v11, v10)) )
    {
      v20 = 1666;
      goto LABEL_23;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 2 )
    {
      v9 = -2147467259;
      v20 = 1685;
      goto LABEL_24;
    }
    if ( v7 != 104 && v7 != 265 )
    {
      v20 = 1675;
LABEL_23:
      v9 = -2147024809;
      goto LABEL_24;
    }
  }
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, (unsigned int)(*(_DWORD *)a3 - 1), a5);
  v13 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x69Fu);
    return v13;
  }
  v21 = 0.0;
  memset_0(v22, 0, sizeof(v22));
  v15 = CExpressionValue::GetAsFloatArray(a2, v14, &v21);
  v13 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x6A2u);
    return v13;
  }
  if ( !*((_BYTE *)a3 + 4) )
    return 0;
  while ( *(_DWORD *)a3 == 1 || *(_DWORD *)a3 == 2 )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 16));
    if ( (unsigned int)v17 >= ExpressionTypeChannelCount || (unsigned int)v17 >= 0x10 )
    {
      v9 = -2147467259;
      v20 = 1740;
      goto LABEL_24;
    }
    a5[v17] = *(float *)&v22[4 * v18 - 4];
    if ( (int)v18 + 1 >= (unsigned int)*((unsigned __int8 *)a3 + 4) )
      return 0;
  }
  v9 = -2147467259;
  v20 = 1725;
LABEL_24:
  v13 = v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v20);
  return v13;
}
