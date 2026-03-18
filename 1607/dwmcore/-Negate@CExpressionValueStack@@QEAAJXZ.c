/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x18001A5F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x1800C21BC (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  const int *v2; // rdx
  struct CExpressionValue *v3; // rbx
  int v4; // eax
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  __int32 v7; // xmm0_4
  _OWORD *v9; // rax
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __int64 i; // rcx
  __m128 v14; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-29h]
  __m128 v16; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v17[64]; // [rsp+50h] [rbp+7h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v15 = 803;
    v2 = 0LL;
    goto LABEL_10;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = *((_DWORD *)v3 + 16);
  if ( v4 != 52 )
  {
    switch ( v4 )
    {
      case 35:
        *(_QWORD *)v3 = _mm_unpacklo_ps(
                          _mm_xor_ps((__m128)*(unsigned int *)v3, (__m128)_xmm),
                          _mm_xor_ps((__m128)*((unsigned int *)v3 + 1), (__m128)_xmm)).m128_u64[0];
        *((_DWORD *)v3 + 16) = 35;
        goto LABEL_4;
      case 18:
        *(_DWORD *)v3 ^= _xmm;
        *((_DWORD *)v3 + 16) = 18;
        goto LABEL_4;
      case 69:
        for ( i = 0LL; i < 4; ++i )
          v16.m128_i32[i] = *(__int32 *)((char *)&v16.m128_i32[i] + v3 - (struct CExpressionValue *)&v16) ^ _xmm;
        v14 = v16;
        *((_DWORD *)v3 + 16) = 69;
        *(__m128 *)v3 = v14;
        goto LABEL_4;
      case 104:
        v10 = (__m128)*((unsigned int *)v3 + 4);
        v11 = (__m128)*((unsigned int *)v3 + 5);
        v12 = _mm_xor_ps(*(__m128 *)v3, (__m128)_xmm);
        *((_DWORD *)v3 + 16) = 104;
        *(__m128 *)v3 = v12;
        *((_QWORD *)v3 + 2) = _mm_unpacklo_ps(_mm_xor_ps(v10, (__m128)_xmm), _mm_xor_ps(v11, (__m128)_xmm)).m128_u64[0];
        v16 = v12;
        goto LABEL_4;
      case 265:
        v9 = (_OWORD *)D2DMatrix::operator-(v3, v17);
        *((_DWORD *)v3 + 16) = 265;
        *(_OWORD *)v3 = *v9;
        *((_OWORD *)v3 + 1) = v9[1];
        *((_OWORD *)v3 + 2) = v9[2];
        *((_OWORD *)v3 + 3) = v9[3];
        goto LABEL_4;
    }
    v15 = 865;
LABEL_10:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v15);
    return v1;
  }
  v5 = (__m128)*(unsigned int *)v3;
  v6 = (__m128)*((unsigned int *)v3 + 1);
  v7 = *((_DWORD *)v3 + 2) ^ _xmm;
  *((_DWORD *)v3 + 16) = 52;
  v16.m128_i32[2] = v7;
  *(_QWORD *)v3 = _mm_unpacklo_ps(
                    _mm_xor_ps(v5, (__m128)(unsigned int)_xmm),
                    _mm_xor_ps(v6, (__m128)(unsigned int)_xmm)).m128_u64[0];
  *((_DWORD *)v3 + 2) = v7;
LABEL_4:
  *((_BYTE *)v3 + 68) = 1;
  return v1;
}
