/*
 * XREFs of ?ScaleMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102498
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ScaleMatrix(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  CExpressionValue *v3; // rcx
  __int64 v4; // xmm0_8
  int v5; // eax
  int v6; // eax
  _DWORD v8[16]; // [rsp+40h] [rbp-40h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    v2 = CExpressionValueStack::PeekStackValue(this, 0);
    v3 = v2;
    if ( *(_DWORD *)v2 == 51 )
    {
      v4 = *((_QWORD *)v2 + 1);
      v5 = *((_DWORD *)v2 + 4);
      v8[14] = 0;
      v8[13] = 0;
      v8[12] = 0;
      v8[11] = 0;
      v8[9] = 0;
      v8[8] = 0;
      v8[7] = 0;
      v8[6] = 0;
      v8[4] = 0;
      v8[3] = 0;
      v8[2] = 0;
      v8[1] = 0;
      v8[0] = v4;
      v8[5] = HIDWORD(v4);
      v8[10] = v5;
      *(float *)&v8[15] = FLOAT_1_0;
      v6 = CExpressionValue::SetMatrix4x4Value(v3, (const struct D2DMatrix *)v8);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA41u);
    }
    else
    {
      v1 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xA38u);
    }
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xA2Bu);
  }
  return v1;
}
