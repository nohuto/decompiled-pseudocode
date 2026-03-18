/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x18011D9E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     powf_0 @ 0x1800BC8DE (powf_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdx
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v9 = 5322;
LABEL_10:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 2);
  v6 = 3LL * (v1 - 1);
  if ( *(_DWORD *)v5 != *(_DWORD *)(v4 + 8 * v6) )
  {
    v9 = 5346;
    goto LABEL_10;
  }
  if ( *(_DWORD *)v5 != 18 )
  {
    v9 = 5380;
    goto LABEL_10;
  }
  v7 = powf_0(*(float *)(v5 + 8), *(float *)(v4 + 8 * v6 + 8));
  if ( _isnan(v7) )
  {
    v9 = 5366;
    goto LABEL_10;
  }
  CExpressionValue::SetDataType(v5);
  *(float *)(v5 + 8) = v7;
  *(_BYTE *)(v5 + 4) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
