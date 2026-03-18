/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18015AD34
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  CExpressionValueStack *v2; // r10
  int v3; // r9d
  struct CExpressionValue **v4; // rdi
  struct CExpressionValue *v5; // rax
  int v6; // r9d
  __int64 v7; // rcx
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-50h]
  _QWORD v15[6]; // [rsp+48h] [rbp-38h] BYREF

  v1 = 0;
  v2 = this;
  if ( *((_DWORD *)this + 4) >= 6u )
  {
    v3 = 0;
    v4 = (struct CExpressionValue **)v15;
    do
    {
      v5 = CExpressionValueStack::PeekStackValue(v2, v3 - 5);
      *v4 = v5;
      if ( *((_DWORD *)v5 + 16) != 18 )
      {
        v13 = 5827;
        goto LABEL_10;
      }
      v3 = v6 + 1;
      ++v4;
    }
    while ( v3 < 6 );
    v7 = v15[0];
    DWORD1(v14) = *(_DWORD *)v15[1];
    LODWORD(v14) = *(_DWORD *)v15[0];
    DWORD2(v14) = *(_DWORD *)v15[2];
    HIDWORD(v14) = *(_DWORD *)v15[3];
    v8 = (__m128)*(unsigned int *)v15[4];
    v9 = (__m128)*(unsigned int *)v15[5];
    *(_OWORD *)v15[0] = v14;
    *(_DWORD *)(v7 + 64) = 104;
    *(_BYTE *)(v7 + 68) = 1;
    *(_QWORD *)(v7 + 16) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
    v10 = 5LL;
    v11 = *((_DWORD *)v2 + 4);
    do
    {
      --v11;
      --v10;
    }
    while ( v10 );
    *((_DWORD *)v2 + 4) = v11;
  }
  else
  {
    v13 = 5812;
LABEL_10:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v13);
  }
  return v1;
}
