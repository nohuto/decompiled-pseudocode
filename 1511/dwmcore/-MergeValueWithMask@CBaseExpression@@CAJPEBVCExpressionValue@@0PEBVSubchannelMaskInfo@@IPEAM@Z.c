/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180128F90
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011B7B8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180136A40 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *this,
        unsigned __int64 a2,
        const struct SubchannelMaskInfo *a3,
        __int64 a4,
        float *a5)
{
  CExpressionValue *v5; // rbp
  int v8; // r9d
  __int64 v9; // rcx
  int AsFloatArray; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  int v13; // eax
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-88h]
  float v19; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v20[60]; // [rsp+34h] [rbp-74h] BYREF

  v5 = (CExpressionValue *)a2;
  LODWORD(a2) = *(_DWORD *)this;
  if ( *((_DWORD *)a3 + 1) == 1 )
  {
    a2 = (unsigned int)(a2 - 18);
    if ( (unsigned int)a2 > 0x33 || (v9 = 0x8000400020001LL, !_bittest64(&v9, a2)) )
    {
      v18 = 1373;
      goto LABEL_23;
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 1) != 2 )
    {
      v8 = -2147467259;
      v18 = 1392;
      goto LABEL_24;
    }
    if ( (_DWORD)a2 != 104 && (_DWORD)a2 != 265 )
    {
      v18 = 1382;
LABEL_23:
      v8 = -2147024809;
      goto LABEL_24;
    }
  }
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, a2, a5);
  v11 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x57Au);
    return v11;
  }
  v19 = 0.0;
  memset_0(v20, 0, sizeof(v20));
  v13 = CExpressionValue::GetAsFloatArray(v5, v12, &v19);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x57Du);
    return v11;
  }
  if ( !*(_BYTE *)a3 )
    return 0;
  while ( *((_DWORD *)a3 + 1) == 1 || *((_DWORD *)a3 + 1) == 2 )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)this);
    if ( (unsigned int)v15 >= ExpressionTypeChannelCount || (unsigned int)v15 >= 0x10 )
    {
      v8 = -2147467259;
      v18 = 1447;
      goto LABEL_24;
    }
    a5[v15] = *(float *)&v20[4 * v16 - 4];
    if ( (int)v16 + 1 >= (unsigned int)*(unsigned __int8 *)a3 )
      return 0;
  }
  v8 = -2147467259;
  v18 = 1432;
LABEL_24:
  v11 = v8;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v18);
  return v11;
}
