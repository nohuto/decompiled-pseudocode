/*
 * XREFs of ?Asin@CExpressionValueStack@@QEAAJXZ @ 0x180119B9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     asinf_0 @ 0x1800BC836 (asinf_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Asin(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  float v4; // xmm0_4
  float v5; // xmm6_4
  unsigned int v7; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v7 = 4692;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v7);
    return v2;
  }
  v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)v3 != 18 )
  {
    v7 = 4734;
    goto LABEL_9;
  }
  v4 = *(float *)(v3 + 8);
  if ( v4 < -1.0 || v4 > 1.0 )
  {
    v7 = 4719;
    goto LABEL_9;
  }
  v5 = asinf_0(v4);
  CExpressionValue::SetDataType(v3);
  *(float *)(v3 + 8) = v5;
  *(_BYTE *)(v3 + 4) = 1;
  return v2;
}
