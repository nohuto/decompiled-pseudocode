/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18011E254
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180157810 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rax
  float v7; // xmm2_4
  int v8; // eax
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v11 = 6631;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 2);
  v6 = v1 - 1;
  if ( *(_DWORD *)v5 != 52 || *(_DWORD *)(v4 + 24 * v6) != 18 )
  {
    v11 = 6646;
    goto LABEL_7;
  }
  v7 = *(float *)(v4 + 24 * v6 + 8);
  v8 = *(_DWORD *)(v5 + 16);
  v12 = *(_QWORD *)(v5 + 8);
  v13 = v8;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v14, (const struct D2DVector3 *)&v12, v7);
  CExpressionValue::SetDataType(v5);
  v9 = v14;
  *(_BYTE *)(v5 + 4) = 1;
  *(_OWORD *)(v5 + 8) = v9;
  --*((_DWORD *)this + 4);
  return v2;
}
