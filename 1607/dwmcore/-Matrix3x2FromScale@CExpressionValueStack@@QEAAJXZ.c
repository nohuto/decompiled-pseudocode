/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ @ 0x18008C56C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  const int *v3; // rdx
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  unsigned int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  int v11; // [rsp+40h] [rbp-28h]

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v7 = 6098;
    v3 = 0LL;
LABEL_7:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v7);
    return v1;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v2 + 16) != 35 )
  {
    v7 = 6111;
    goto LABEL_7;
  }
  v4 = 0LL;
  DWORD1(v9) = (unsigned int)v3 & v10;
  v5 = 0LL;
  DWORD2(v9) = (unsigned int)v3 & v11;
  v8 = *(_QWORD *)v2;
  LODWORD(v9) = *(_QWORD *)v2;
  *((_DWORD *)v2 + 16) = 104;
  HIDWORD(v9) = HIDWORD(v8);
  *((_BYTE *)v2 + 68) = 1;
  v5.m128_f32[0] = 0.0 - (float)(*(float *)&v8 * 0.0);
  v4.m128_f32[0] = 0.0 - (float)(*((float *)&v8 + 1) * 0.0);
  *(_OWORD *)v2 = v9;
  *((_QWORD *)v2 + 2) = _mm_unpacklo_ps(v5, v4).m128_u64[0];
  return v1;
}
