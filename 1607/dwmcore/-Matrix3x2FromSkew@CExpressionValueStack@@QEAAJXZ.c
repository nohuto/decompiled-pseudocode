/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJXZ @ 0x18015AF20
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v3; // rdx
  struct CExpressionValue *v4; // rsi
  struct CExpressionValue *v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  unsigned int v10; // [rsp+20h] [rbp-48h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+38h] [rbp-30h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v10 = 6209;
    v3 = 0LL;
LABEL_8:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v10);
    return v1;
  }
  v4 = CExpressionValueStack::PeekStackValue(this, -2);
  CExpressionValueStack::PeekStackValue(this, -1);
  v5 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v4 + 16) != 18 || *(_DWORD *)(v6 + 64) != 18 || *((_DWORD *)v5 + 16) != 35 )
  {
    v10 = 6226;
    goto LABEL_8;
  }
  D2D1MakeSkewMatrix(
    *(float *)v4 * 57.295776,
    *(float *)v6 * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(
                                 (__m128)(unsigned int)*(_QWORD *)v5,
                                 (__m128)(unsigned int)HIDWORD(*(_QWORD *)v5)),
    &matrix);
  v7 = *(_OWORD *)&matrix.m11;
  *((_DWORD *)v4 + 16) = 104;
  v8 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v4 = v7;
  *((_BYTE *)v4 + 68) = 1;
  *((_QWORD *)v4 + 2) = v8;
  *((_DWORD *)this + 4) -= 2;
  return v1;
}
