/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x18011A574
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  unsigned int v11; // [rsp+20h] [rbp-28h]
  float v12[6]; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 4 )
  {
    v11 = 5949;
LABEL_25:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 4);
  if ( *(_DWORD *)v5 != 18
    || *(_DWORD *)(v4 + 24LL * (v1 - 3)) != 18
    || *(_DWORD *)(v4 + 24LL * (v1 - 2)) != 18
    || *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 )
  {
    v11 = 5968;
    goto LABEL_25;
  }
  v6 = *(float *)(v4 + 24LL * (v1 - 3) + 8);
  if ( v6 >= 255.0 )
    v6 = FLOAT_255_0;
  if ( v6 <= 0.0 )
    v6 = 0.0;
  v7 = *(float *)(v4 + 24LL * (v1 - 2) + 8);
  if ( v7 >= 255.0 )
    v7 = FLOAT_255_0;
  if ( v7 <= 0.0 )
    v7 = 0.0;
  v8 = *(float *)(v4 + 24LL * (v1 - 1) + 8);
  if ( v8 >= 255.0 )
    v8 = FLOAT_255_0;
  if ( v8 <= 0.0 )
    v8 = 0.0;
  v9 = *(float *)(v5 + 8);
  if ( v9 >= 255.0 )
    v9 = FLOAT_255_0;
  if ( v9 <= 0.0 )
    v9 = 0.0;
  v12[0] = v6 / 255.0;
  v12[1] = v7 / 255.0;
  v12[2] = v8 / 255.0;
  v12[3] = v9 / 255.0;
  CExpressionValue::SetDataType(v5);
  *(_BYTE *)(v5 + 4) = 1;
  *(_OWORD *)(v5 + 8) = *(_OWORD *)v12;
  *((_DWORD *)this + 4) -= 3;
  return v2;
}
