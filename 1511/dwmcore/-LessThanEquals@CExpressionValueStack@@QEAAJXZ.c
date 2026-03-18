/*
 * XREFs of ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x18011C154
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LessThanEquals(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rdx
  bool v7; // bl
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v4 + 24LL * (v1 - 2);
    v6 = 3LL * (v1 - 1);
    if ( *(_DWORD *)v5 == *(_DWORD *)(v4 + 8 * v6) )
    {
      if ( *(_DWORD *)v5 == 18 )
      {
        v7 = *(float *)(v4 + 8 * v6 + 8) >= *(float *)(v5 + 8);
        CExpressionValue::SetDataType(v5);
        *(_BYTE *)(v5 + 8) = v7;
        *(_BYTE *)(v5 + 4) = 1;
        --*((_DWORD *)this + 4);
        return v2;
      }
      v9 = 2384;
    }
    else
    {
      v9 = 2364;
    }
  }
  else
  {
    v9 = 2335;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
  return v2;
}
