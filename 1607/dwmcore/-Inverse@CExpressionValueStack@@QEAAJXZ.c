/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18015A47C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180187C14 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v2; // rax
  const int *v3; // rdx
  struct CExpressionValue *v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // xmm1_8
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  unsigned int v12; // [rsp+20h] [rbp-29h]
  float v13[4]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-9h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+80h] [rbp+37h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v12 = 3066;
LABEL_13:
    v3 = 0LL;
    goto LABEL_14;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = v2;
  if ( *((_DWORD *)v2 + 16) == 104 )
  {
    v8 = *((_QWORD *)v2 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v2;
    *(_QWORD *)&matrix.m[2][0] = v8;
    if ( !D2D1InvertMatrix(&matrix) )
    {
      v12 = 3092;
      goto LABEL_13;
    }
    v9 = *(_OWORD *)&matrix.m11;
    *((_DWORD *)v4 + 16) = 104;
    v10 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v4 = v9;
    *((_QWORD *)v4 + 2) = v10;
  }
  else
  {
    if ( *((_DWORD *)v2 + 16) != 265 )
    {
      v12 = 3131;
LABEL_14:
      v1 = -2147467259;
      MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v12);
      return v1;
    }
    LODWORD(v13[0]) &= (unsigned int)v3;
    D2DMatrixInverse((struct D2DMatrix *)v14, v13, v2);
    if ( v13[0] == 0.0 )
    {
      v12 = 3116;
      goto LABEL_13;
    }
    v5 = v14[1];
    *(_OWORD *)v4 = v14[0];
    *((_DWORD *)v4 + 16) = 265;
    v6 = v14[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v14[3];
    *((_OWORD *)v4 + 2) = v6;
    *((_OWORD *)v4 + 3) = v7;
  }
  *((_BYTE *)v4 + 68) = 1;
  return v1;
}
