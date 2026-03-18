/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18015C8C4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180188B84 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  CExpressionValueStack *v3; // r9
  struct CExpressionValue *v4; // rax
  __int64 v5; // r9
  __int128 *v6; // r10
  __int128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  unsigned int v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(v3, 0);
    if ( *((_DWORD *)v6 + 16) == 35 )
    {
      if ( *((_DWORD *)v4 + 16) != 104 )
      {
        v11 = 3014;
        goto LABEL_3;
      }
      *(_QWORD *)&v13 = *(_QWORD *)v6;
      v8 = (__m128)(unsigned int)v13;
      v9 = (__m128)DWORD1(v13);
      v9.m128_f32[0] = (float)((float)(*((float *)&v13 + 1) * *((float *)v4 + 2))
                             + (float)(*(float *)&v13 * *(float *)v4))
                     + *((float *)v4 + 4);
      v8.m128_f32[0] = (float)((float)(*(float *)&v13 * *((float *)v4 + 1))
                             + (float)(*((float *)&v13 + 1) * *((float *)v4 + 3)))
                     + *((float *)v4 + 5);
      *((_DWORD *)v6 + 16) = 35;
      *(_QWORD *)v6 = _mm_unpacklo_ps(v9, v8).m128_u64[0];
    }
    else
    {
      if ( *((_DWORD *)v6 + 16) != 69 )
      {
LABEL_13:
        --*(_DWORD *)(v5 + 16);
        return v1;
      }
      if ( *((_DWORD *)v4 + 16) != 265 )
      {
        v11 = 2983;
        goto LABEL_3;
      }
      v13 = *v6;
      D3DXVec4TransformArray((struct D2DVector4 *)&v14, (unsigned int)v2, (const struct D2DVector4 *)&v13, v5, v4, v12);
      v7 = v14;
      *((_DWORD *)v6 + 16) = 69;
      *v6 = v7;
    }
    *((_BYTE *)v6 + 68) = 1;
    goto LABEL_13;
  }
  v11 = 2956;
  v2 = 0LL;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v11);
  return v1;
}
