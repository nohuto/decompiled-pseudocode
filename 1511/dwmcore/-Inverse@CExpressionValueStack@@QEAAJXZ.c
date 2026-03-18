/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18011B974
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800AABC4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  CExpressionValue *v5; // rdi
  const struct D2DMatrix *Matrix4x4Value; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v11; // [rsp+20h] [rbp-69h]
  float v12[4]; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v14[64]; // [rsp+80h] [rbp-9h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+C0h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v11 = 3454;
LABEL_12:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v3 = 3LL * (unsigned int)(v1 - 1);
  v4 = *((_QWORD *)this + 3);
  v5 = (CExpressionValue *)(v4 + 8 * v3);
  if ( *(_DWORD *)v5 == 104 )
  {
    matrix = *CExpressionValue::GetMatrix3x2Value((CExpressionValue *)(v4 + 8 * v3));
    if ( !D2D1InvertMatrix(&matrix) )
    {
      v11 = 3480;
      goto LABEL_12;
    }
    CExpressionValue::SetMatrix3x2Value(v5, &matrix);
  }
  else
  {
    if ( *(_DWORD *)v5 != 265 )
    {
      v11 = 3519;
      goto LABEL_12;
    }
    v12[0] = 0.0;
    Matrix4x4Value = CExpressionValue::GetMatrix4x4Value((CExpressionValue *)(v4 + 8 * v3));
    v7 = *((_OWORD *)Matrix4x4Value + 1);
    v13[0] = *(_OWORD *)Matrix4x4Value;
    v8 = *((_OWORD *)Matrix4x4Value + 2);
    v13[1] = v7;
    v9 = *((_OWORD *)Matrix4x4Value + 3);
    v13[2] = v8;
    v13[3] = v9;
    D2DMatrixInverse((struct D2DMatrix *)v14, v12, (const struct D2DMatrix *)v13);
    if ( v12[0] == 0.0 )
    {
      v11 = 3504;
      goto LABEL_12;
    }
    CExpressionValue::SetMatrix4x4Value(v5, (const struct D2DMatrix *)v14);
  }
  return v2;
}
