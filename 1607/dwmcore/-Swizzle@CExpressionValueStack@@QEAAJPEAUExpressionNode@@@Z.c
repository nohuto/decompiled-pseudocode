/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x18001A4C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800AD048 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800AD0C8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, struct ExpressionNode *a2)
{
  char *v2; // r14
  struct CExpressionValue *v3; // rax
  int v4; // edx
  unsigned int v5; // edi
  struct CExpressionValue *v6; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v8; // edi
  unsigned int v9; // r15d
  unsigned int v10; // edx
  int AsFloatArray; // eax
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  int v26; // eax
  unsigned int v27; // [rsp+28h] [rbp-79h]
  __int128 v28; // [rsp+58h] [rbp-49h] BYREF
  __int128 v29; // [rsp+68h] [rbp-39h]
  __int128 v30; // [rsp+78h] [rbp-29h]
  __int128 v31; // [rsp+88h] [rbp-19h]
  float v32; // [rsp+98h] [rbp-9h] BYREF
  char v33[60]; // [rsp+9Ch] [rbp-5h] BYREF

  if ( !*((_DWORD *)this + 4) )
  {
    v27 = 6488;
    goto LABEL_36;
  }
  if ( *(_DWORD *)a2 == 78 )
  {
    v2 = (char *)a2 + 4;
  }
  else
  {
    if ( *(_DWORD *)a2 != 79 )
    {
      v27 = 6514;
      goto LABEL_36;
    }
    v2 = (char *)a2 + 8;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  LODWORD(v32) &= v4;
  v5 = v4 + 60;
  v6 = v3;
  memset_0(v33, v4, (unsigned int)(v4 + 60));
  LODWORD(v28) = 0;
  memset_0((char *)&v28 + 4, 0, v5);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)v6 + 16));
  v8 = (unsigned __int8)v2[4];
  v9 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray(v6, v10, &v32);
  v12 = 0LL;
  v13 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x1987u);
    return v13;
  }
  if ( v8 )
  {
    do
    {
      if ( *(_DWORD *)v2 == 1 )
      {
        v14 = ((unsigned __int8)v2[8] >> (2 * (v2[4] - v12 - 1))) & 3;
      }
      else
      {
        if ( *(_DWORD *)v2 != 2 )
        {
          v27 = 6561;
          goto LABEL_36;
        }
        v14 = (*((_QWORD *)v2 + 1) >> (4 * (v2[4] - (unsigned __int8)v12) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v14 >= v9 )
      {
        v27 = 6572;
        goto LABEL_36;
      }
      if ( (unsigned int)v12 >= 0x10 )
      {
        v27 = 6583;
        goto LABEL_36;
      }
      *((float *)&v28 + v12) = *(float *)&v33[4 * v14 - 4];
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < v8 );
  }
  v15 = v8 - 1;
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( !v17 )
    {
      *(_QWORD *)v6 = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
      *((_DWORD *)v6 + 16) = 35;
      goto LABEL_13;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v26 = DWORD2(v28);
      *(_QWORD *)v6 = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
      *((_DWORD *)v6 + 2) = v26;
      *((_DWORD *)v6 + 16) = 52;
      goto LABEL_13;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v25 = v28;
      *((_DWORD *)v6 + 16) = 69;
      *(_OWORD *)v6 = v25;
      goto LABEL_13;
    }
    v20 = v19 - 2;
    if ( !v20 )
    {
      v24 = _mm_unpacklo_ps((__m128)(unsigned int)v29, (__m128)DWORD1(v29)).m128_u64[0];
      *(_OWORD *)v6 = v28;
      *((_DWORD *)v6 + 16) = 104;
      *((_QWORD *)v6 + 2) = v24;
      goto LABEL_13;
    }
    if ( v20 == 10 )
    {
      v21 = v29;
      *(_OWORD *)v6 = v28;
      *((_DWORD *)v6 + 16) = 265;
      v22 = v30;
      *((_OWORD *)v6 + 1) = v21;
      v23 = v31;
      *((_OWORD *)v6 + 2) = v22;
      *((_OWORD *)v6 + 3) = v23;
      goto LABEL_13;
    }
    v27 = 6629;
LABEL_36:
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v27);
    return v13;
  }
  *(_DWORD *)v6 = v28;
  *((_DWORD *)v6 + 16) = 18;
LABEL_13:
  *((_BYTE *)v6 + 68) = 1;
  return v13;
}
