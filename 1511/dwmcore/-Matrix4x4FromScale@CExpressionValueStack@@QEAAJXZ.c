/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ @ 0x18011C7B4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // xmm0_8
  int v5; // eax
  int v6; // eax
  _DWORD v8[16]; // [rsp+40h] [rbp-40h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)v3 == 52 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = *(_DWORD *)(v3 + 16);
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
      v6 = CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v3, (const struct D2DMatrix *)v8);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1975u);
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x196Cu);
    }
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x195Fu);
  }
  return v2;
}
