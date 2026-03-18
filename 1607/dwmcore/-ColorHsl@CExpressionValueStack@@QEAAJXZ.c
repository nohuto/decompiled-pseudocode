/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x180159294
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     fmodf_0 @ 0x1800BF626 (fmodf_0.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801599B4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  const int *v3; // rdx
  struct CExpressionValue *v4; // rsi
  struct CExpressionValue *v5; // rax
  __int64 v6; // r9
  float v7; // xmm8_4
  float v8; // xmm6_4
  ColorSpaceHelpers *v9; // rcx
  __int128 v10; // xmm0
  unsigned int v12; // [rsp+20h] [rbp-58h]
  _OWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v12 = 5655;
    v3 = 0LL;
LABEL_8:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v12);
    return v1;
  }
  v4 = CExpressionValueStack::PeekStackValue(this, -2);
  CExpressionValueStack::PeekStackValue(this, -1);
  v5 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v4 + 16) != 18 || *(_DWORD *)(v6 + 64) != 18 || *((_DWORD *)v5 + 16) != 18 )
  {
    v12 = 5672;
    goto LABEL_8;
  }
  v7 = fmaxf(fminf(*(float *)v5, 1.0), 0.0);
  v8 = fmaxf(fminf(*(float *)v6, 1.0), 0.0);
  fmodf_0(*(float *)v4, 6.2831855);
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v9,
    v8,
    v7,
    1.0,
    COERCE_FLOAT(v13),
    (float *)v13 + 1,
    (float *)v13 + 2,
    (float *)v13 + 3,
    *(float **)&v13[0]);
  v10 = v13[0];
  *((_DWORD *)v4 + 16) = 70;
  *((_BYTE *)v4 + 68) = 1;
  *(_OWORD *)v4 = v10;
  *((_DWORD *)this + 4) -= 2;
  return v1;
}
