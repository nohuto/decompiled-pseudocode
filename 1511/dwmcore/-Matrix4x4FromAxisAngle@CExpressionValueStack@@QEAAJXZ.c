/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18011C6EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180012410 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rax
  float v6; // xmm2_4
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  _BYTE v14[72]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v11 = 6554;
LABEL_9:
    v9 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v9;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = v3 + 24LL * (v1 - 2);
  v5 = v1 - 1;
  if ( *(_DWORD *)v4 != 52 || *(_DWORD *)(v3 + 24 * v5) != 18 )
  {
    v11 = 6569;
    goto LABEL_9;
  }
  v6 = *(float *)(v3 + 24 * v5 + 8);
  v7 = *(_DWORD *)(v4 + 16);
  v12 = *(_QWORD *)(v4 + 8);
  v13 = v7;
  D2DMatrixRotationAxis((struct D2DMatrix *)v14, (const struct D2DVector3 *)&v12, v6);
  v8 = CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v4, (const struct D2DMatrix *)v14);
  v9 = v8;
  if ( v8 >= 0 )
    --*((_DWORD *)this + 4);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x19B8u);
  return v9;
}
