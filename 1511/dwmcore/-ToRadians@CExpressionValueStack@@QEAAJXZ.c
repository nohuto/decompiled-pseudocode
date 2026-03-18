/*
 * XREFs of ?ToRadians@CExpressionValueStack@@QEAAJXZ @ 0x18011F5A8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ToRadians(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  float v4; // xmm6_4
  unsigned int v6; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)v3 == 18 )
    {
      v4 = *(float *)(v3 + 8);
      CExpressionValue::SetDataType(v3);
      *(_BYTE *)(v3 + 4) = 1;
      *(float *)(v3 + 8) = v4 * 0.017453292;
      return v2;
    }
    v6 = 5718;
  }
  else
  {
    v6 = 5690;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v6);
  return v2;
}
