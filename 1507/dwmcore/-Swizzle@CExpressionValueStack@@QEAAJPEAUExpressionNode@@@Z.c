/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180100FB4 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18012122C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, struct ExpressionNode *a2)
{
  unsigned int v2; // esi
  char *v3; // r15
  struct CExpressionValue *v4; // rdi
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // edx
  int AsFloatArray; // eax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  __m128 v18; // xmm6
  FLOAT dx; // eax
  __m128 v20; // xmm6
  unsigned int v22; // [rsp+28h] [rbp-99h]
  struct D2D_MATRIX_3X2_F v23; // [rsp+30h] [rbp-91h] BYREF
  __int64 v24; // [rsp+48h] [rbp-79h]
  __int128 v25; // [rsp+58h] [rbp-69h] BYREF
  __int128 v26; // [rsp+68h] [rbp-59h]
  __int128 v27; // [rsp+78h] [rbp-49h]
  __int128 v28; // [rsp+88h] [rbp-39h]
  _OWORD v29[4]; // [rsp+98h] [rbp-29h] BYREF

  if ( !*((_DWORD *)this + 4) )
  {
    v22 = 2738;
    goto LABEL_24;
  }
  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)a2 == 27 )
  {
    v3 = (char *)a2 + 4;
  }
  else if ( *(_DWORD *)a2 == 28 )
  {
    v3 = (char *)a2 + 8;
  }
  LODWORD(v29[0]) = 0;
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  memset_0((char *)v29 + 4, 0, 0x3CuLL);
  LODWORD(v25) = 0;
  memset_0((char *)&v25 + 4, 0, 0x3CuLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)v4);
  v6 = (unsigned __int8)*v3;
  v7 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray(v4, v8, (float *)v29);
  v10 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0xAD7u);
    return v10;
  }
  if ( v6 )
  {
    do
    {
      if ( *((_DWORD *)v3 + 1) == 1 )
      {
        v11 = ((unsigned __int8)v3[8] >> (2 * (*v3 - v2 - 1))) & 3;
      }
      else
      {
        if ( *((_DWORD *)v3 + 1) != 2 )
        {
          v22 = 2801;
LABEL_24:
          v10 = -2147467259;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v22);
          return v10;
        }
        v11 = (*((_QWORD *)v3 + 1) >> (4 * (*v3 - (unsigned __int8)v2) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v11 >= v7 )
      {
        v22 = 2812;
        goto LABEL_24;
      }
      if ( v2 >= 0x10 )
      {
        v22 = 2823;
        goto LABEL_24;
      }
      v12 = v2++;
      *((_DWORD *)&v25 + v12) = *((_DWORD *)v29 + v11);
    }
    while ( v2 < v6 );
  }
  v13 = v6 - 1;
  if ( !v13 )
  {
    CExpressionValue::SetDataType(v4);
    *((_DWORD *)v4 + 2) = v25;
    goto LABEL_35;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v20 = (__m128)DWORD1(v25);
    CExpressionValue::SetDataType(v4);
    *((_QWORD *)v4 + 1) = _mm_unpacklo_ps((__m128)(unsigned int)v25, v20).m128_u64[0];
    goto LABEL_35;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v18 = (__m128)DWORD1(v25);
    v23.dx = *((FLOAT *)&v25 + 2);
    CExpressionValue::SetDataType(v4);
    dx = v23.dx;
    *((_QWORD *)v4 + 1) = _mm_unpacklo_ps((__m128)(unsigned int)v25, v18).m128_u64[0];
    *((FLOAT *)v4 + 4) = dx;
    goto LABEL_35;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    *(_OWORD *)&v23.m[1][0] = v25;
    CExpressionValue::SetDataType(v4);
    *(_OWORD *)((char *)v4 + 8) = *(_OWORD *)&v23.m[1][0];
LABEL_35:
    *((_BYTE *)v4 + 4) = 1;
    return v10;
  }
  v17 = v16 - 2;
  if ( v17 )
  {
    if ( v17 != 10 )
    {
      v22 = 2868;
      goto LABEL_24;
    }
    v29[0] = v25;
    v29[1] = v26;
    v29[2] = v27;
    v29[3] = v28;
    CExpressionValue::SetMatrix4x4Value(v4, (const struct D2DMatrix *)v29);
  }
  else
  {
    *(_OWORD *)&v23.m[1][0] = v25;
    v24 = v26;
    CExpressionValue::SetMatrix3x2Value(v4, (struct D2D_MATRIX_3X2_F *)v23.m[1]);
  }
  return v10;
}
