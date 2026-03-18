/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x18011F1A0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011B7B8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180136A40 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, struct ExpressionNode *a2)
{
  int v2; // eax
  char *v3; // r14
  __int64 v4; // rdi
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // edx
  int AsFloatArray; // eax
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  __m128 v18; // xmm6
  FLOAT m21; // eax
  __m128 v20; // xmm6
  unsigned int v22; // [rsp+28h] [rbp-89h]
  struct D2D_MATRIX_3X2_F v23; // [rsp+38h] [rbp-79h] BYREF
  __int128 v24; // [rsp+58h] [rbp-59h] BYREF
  __int128 v25; // [rsp+68h] [rbp-49h]
  __int128 v26; // [rsp+78h] [rbp-39h]
  __int128 v27; // [rsp+88h] [rbp-29h]
  _OWORD v28[4]; // [rsp+98h] [rbp-19h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    v22 = 6707;
    goto LABEL_35;
  }
  if ( *(_DWORD *)a2 == 75 )
  {
    v3 = (char *)a2 + 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a2 == 76 )
  {
    v3 = (char *)a2 + 8;
LABEL_7:
    LODWORD(v28[0]) = 0;
    v4 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v2 - 1);
    memset_0((char *)v28 + 4, 0, 0x3CuLL);
    LODWORD(v24) = 0;
    memset_0((char *)&v24 + 4, 0, 0x3CuLL);
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)v4);
    v6 = (unsigned __int8)*v3;
    v7 = ExpressionTypeChannelCount;
    AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)v4, v8, (float *)v28);
    v10 = 0LL;
    v11 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x1A62u);
      return v11;
    }
    if ( v6 )
    {
      do
      {
        if ( *((_DWORD *)v3 + 1) == 1 )
        {
          v12 = ((unsigned __int8)v3[8] >> (2 * (*v3 - v10 - 1))) & 3;
        }
        else
        {
          if ( *((_DWORD *)v3 + 1) != 2 )
          {
            v22 = 6780;
            goto LABEL_35;
          }
          v12 = (*((_QWORD *)v3 + 1) >> (4 * (*v3 - (unsigned __int8)v10) - 4)) & 0xFLL;
        }
        if ( (unsigned int)v12 >= v7 )
        {
          v22 = 6791;
          goto LABEL_35;
        }
        if ( (unsigned int)v10 >= 0x10 )
        {
          v22 = 6802;
          goto LABEL_35;
        }
        *((_DWORD *)&v24 + v10) = *((_DWORD *)v28 + v12);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < v6 );
    }
    v13 = v6 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              if ( v17 != 10 )
              {
                v22 = 6847;
                goto LABEL_35;
              }
              v28[0] = v24;
              v28[1] = v25;
              v28[2] = v26;
              v28[3] = v27;
              CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v4, (const struct D2DMatrix *)v28);
            }
            else
            {
              *(_OWORD *)&v23.m11 = v24;
              *(_QWORD *)&v23.m[2][0] = v25;
              CExpressionValue::SetMatrix3x2Value((CExpressionValue *)v4, &v23);
            }
            return v11;
          }
          *(_OWORD *)&v23.m11 = v24;
          CExpressionValue::SetDataType(v4);
          *(_OWORD *)(v4 + 8) = *(_OWORD *)&v23.m11;
        }
        else
        {
          v18 = (__m128)DWORD1(v24);
          v23.m21 = *((FLOAT *)&v24 + 2);
          CExpressionValue::SetDataType(v4);
          m21 = v23.m21;
          *(_QWORD *)(v4 + 8) = _mm_unpacklo_ps((__m128)(unsigned int)v24, v18).m128_u64[0];
          *(FLOAT *)(v4 + 16) = m21;
        }
      }
      else
      {
        v20 = (__m128)DWORD1(v24);
        CExpressionValue::SetDataType(v4);
        *(_QWORD *)(v4 + 8) = _mm_unpacklo_ps((__m128)(unsigned int)v24, v20).m128_u64[0];
      }
    }
    else
    {
      CExpressionValue::SetDataType(v4);
      *(_DWORD *)(v4 + 8) = v24;
    }
    *(_BYTE *)(v4 + 4) = 1;
    return v11;
  }
  v22 = 6733;
LABEL_35:
  v11 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v22);
  return v11;
}
