/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x18011CE48
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     fmodf_0 @ 0x1800BC896 (fmodf_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdx
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  unsigned int v11; // [rsp+20h] [rbp-48h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v11 = 1867;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 2);
  v6 = 3LL * (v1 - 1);
  if ( *(_DWORD *)v5 != *(_DWORD *)(v4 + 8 * v6) )
  {
    v11 = 1891;
    goto LABEL_7;
  }
  if ( *(_DWORD *)v5 != 18 )
  {
    v11 = 1930;
    goto LABEL_7;
  }
  v7 = *(float *)(v4 + 8 * v6 + 8);
  if ( v7 <= 0.0 )
  {
    v11 = 1906;
    goto LABEL_7;
  }
  v8 = fmodf_0(*(float *)(v5 + 8), *(float *)(v4 + 8 * v6 + 8));
  v9 = v8;
  if ( v8 < 0.0 )
    v9 = v8 + v7;
  CExpressionValue::SetDataType(v5);
  *(float *)(v5 + 8) = v9;
  *(_BYTE *)(v5 + 4) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
