/*
 * XREFs of ?AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180100AA8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801494BC (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::AxisAngleRotateMatrix(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rdi
  struct CExpressionValue *v3; // rax
  __int64 v4; // xmm0_8
  float v5; // xmm2_4
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  _BYTE v12[72]; // [rsp+40h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 4) < 2u )
  {
    v9 = 2662;
LABEL_9:
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v7;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -1);
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *(_DWORD *)v2 != 51 || *(_DWORD *)v3 != 17 )
  {
    v9 = 2677;
    goto LABEL_9;
  }
  v4 = *((_QWORD *)v2 + 1);
  v5 = *((float *)v3 + 2) * 0.017453292;
  v11 = *((_DWORD *)v2 + 4);
  v10 = v4;
  D2DMatrixRotationAxis((struct D2DMatrix *)v12, (const struct D2DVector3 *)&v10, v5);
  v6 = CExpressionValue::SetMatrix4x4Value(v2, (const struct D2DMatrix *)v12);
  v7 = v6;
  if ( v6 >= 0 )
    --*((_DWORD *)this + 4);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA84u);
  return v7;
}
