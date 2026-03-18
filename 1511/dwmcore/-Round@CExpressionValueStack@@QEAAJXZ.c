/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x18011E824
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  float v4; // xmm6_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  unsigned int v11; // [rsp+20h] [rbp-28h]
  float Y; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v11 = 5169;
LABEL_5:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)v3 != 18 )
  {
    v11 = 5214;
    goto LABEL_5;
  }
  v4 = *(float *)(v3 + 8);
  v5 = modff(v4, &Y);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(Y) & _xmm);
  if ( (unsigned int)(int)v6 % 2LL || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm), v7 != 0.5) )
  {
    if ( v4 < 0.0 )
      v9 = ceilf_0(v4 - 0.5);
    else
      v9 = floorf_0(v4 + 0.5);
    v8 = v9;
  }
  else if ( v4 < 0.0 )
  {
    v8 = ceilf_0(v4 - 0.5) + 1.0;
  }
  else
  {
    v8 = floorf_0(v4 + 0.5) - 1.0;
  }
  CExpressionValue::SetDataType(v3);
  *(float *)(v3 + 8) = v8;
  *(_BYTE *)(v3 + 4) = 1;
  return v2;
}
