/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18015BE9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18018855C (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rax
  float v5; // xmm2_4
  int v6; // eax
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v9 = 6412;
LABEL_7:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v3 + 16) != 52 || *((_DWORD *)v4 + 16) != 18 )
  {
    v9 = 6427;
    goto LABEL_7;
  }
  v5 = *(float *)v4;
  v6 = *((_DWORD *)v3 + 2);
  v10 = *(_QWORD *)v3;
  v11 = v6;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v12, (const struct D2DVector3 *)&v10, v5);
  v7 = v12;
  *((_DWORD *)v3 + 16) = 71;
  *((_BYTE *)v3 + 68) = 1;
  *(_OWORD *)v3 = v7;
  --*((_DWORD *)this + 4);
  return v1;
}
