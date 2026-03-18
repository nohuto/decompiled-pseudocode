/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJXZ @ 0x18015AE5C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  struct CExpressionValue *v3; // rax
  struct CExpressionValue *v4; // rdi
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  unsigned int v8; // [rsp+20h] [rbp-38h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, 0);
    v4 = v3;
    if ( *((_DWORD *)v3 + 16) == 18 )
    {
      D2D1MakeRotateMatrix(
        *(float *)v3 * 57.295776,
        (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL),
        &matrix);
      v5 = *(_OWORD *)&matrix.m11;
      *((_DWORD *)v4 + 16) = 104;
      v6 = *(_QWORD *)&matrix.m[2][0];
      *(_OWORD *)v4 = v5;
      *((_BYTE *)v4 + 68) = 1;
      *((_QWORD *)v4 + 2) = v6;
      return v1;
    }
    v8 = 6291;
  }
  else
  {
    v8 = 6279;
    v2 = 0LL;
  }
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v8);
  return v1;
}
