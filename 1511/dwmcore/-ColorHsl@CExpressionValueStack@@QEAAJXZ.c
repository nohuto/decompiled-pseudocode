/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18011A0E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     fmodf_0 @ 0x1800BC896 (fmodf_0.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18011A858 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  ColorSpaceHelpers *v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm2_4
  __int128 v12; // xmm0
  unsigned int v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v14 = 6043;
LABEL_16:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v14);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 3);
  v6 = 3LL * (v1 - 2);
  v7 = v1 - 1;
  v8 = 3 * v7;
  if ( *(_DWORD *)v5 != 18 || *(_DWORD *)(v4 + 24LL * (v1 - 2)) != 18 || *(_DWORD *)(v4 + 24 * v7) != 18 )
  {
    v14 = 6060;
    goto LABEL_16;
  }
  fmodf_0(*(float *)(v5 + 8), 6.2831855);
  v10 = *(float *)(v4 + 8 * v6 + 8);
  if ( v10 >= 1.0 )
    v10 = FLOAT_1_0;
  if ( v10 <= 0.0 )
    v10 = 0.0;
  v11 = *(float *)(v4 + 8 * v8 + 8);
  if ( v11 >= 1.0 )
    v11 = FLOAT_1_0;
  if ( v11 <= 0.0 )
    v11 = 0.0;
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v9,
    v10,
    v11,
    1.0,
    COERCE_FLOAT(&v15),
    (float *)&v15 + 1,
    (float *)&v15 + 2,
    (float *)&v15 + 3,
    (float *)v15);
  CExpressionValue::SetDataType(v5);
  v12 = v15;
  *(_BYTE *)(v5 + 4) = 1;
  *(_OWORD *)(v5 + 8) = v12;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
