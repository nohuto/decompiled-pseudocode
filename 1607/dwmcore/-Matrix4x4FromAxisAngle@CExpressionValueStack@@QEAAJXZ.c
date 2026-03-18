/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18001A9D4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18001AAF4 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rax
  float v5; // xmm2_4
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  _OWORD v11[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v8 = 6335;
    goto LABEL_8;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v3 + 16) != 52 || *((_DWORD *)v4 + 16) != 18 )
  {
    v8 = 6350;
LABEL_8:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v8);
    return v1;
  }
  v5 = *(float *)v4;
  v6 = *((_DWORD *)v3 + 2);
  v9 = *(_QWORD *)v3;
  v10 = v6;
  D2DMatrixRotationAxis((struct D2DMatrix *)v11, (const struct D2DVector3 *)&v9, v5);
  *((_DWORD *)v3 + 16) = 265;
  *(_OWORD *)v3 = v11[0];
  *((_OWORD *)v3 + 1) = v11[1];
  *((_OWORD *)v3 + 2) = v11[2];
  *((_OWORD *)v3 + 3) = v11[3];
  *((_BYTE *)v3 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v1;
}
