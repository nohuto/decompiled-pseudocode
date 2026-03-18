/*
 * XREFs of ?Log10@CExpressionValueStack@@QEAAJXZ @ 0x18011C2C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     log10f_0 @ 0x1800BC8A2 (log10f_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Log10(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  float v4; // xmm6_4
  unsigned int v6; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v6 = 5478;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v6);
    return v2;
  }
  v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)v3 != 18 )
  {
    v6 = 5520;
    goto LABEL_8;
  }
  v4 = log10f_0(*(float *)(v3 + 8));
  if ( _isnan(v4) )
  {
    v6 = 5505;
    goto LABEL_8;
  }
  CExpressionValue::SetDataType(v3);
  *(float *)(v3 + 8) = v4;
  *(_BYTE *)(v3 + 4) = 1;
  return v2;
}
