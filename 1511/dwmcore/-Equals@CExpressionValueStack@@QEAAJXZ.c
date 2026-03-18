/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x18011B420
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r8
  const struct D2DMatrix *Matrix4x4Value; // rax
  const void *v8; // rdx
  bool v9; // zf
  bool v10; // bl
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int128 v12; // xmm6
  CExpressionValue *v13; // r8
  bool v14; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-50h]
  struct D2D_MATRIX_3X2_F v19; // [rsp+30h] [rbp-40h]
  __m128i v20; // [rsp+30h] [rbp-40h]
  struct D2D_MATRIX_3X2_F v21; // [rsp+48h] [rbp-28h]
  __m128i v22; // [rsp+48h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v4 + 24LL * (v1 - 2);
    v6 = v4 + 24LL * (v1 - 1);
    if ( *(_DWORD *)v5 != *(_DWORD *)v6 )
    {
      v18 = 1998;
      goto LABEL_14;
    }
    switch ( *(_DWORD *)v5 )
    {
      case 0x12:
        v10 = *(float *)(v5 + 8) == *(float *)(v6 + 8);
        goto LABEL_38;
      case 0x23:
        v9 = *(_QWORD *)(v5 + 8) == *(_QWORD *)(v6 + 8);
        break;
      case 0x34:
        v16 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(v6 + 8);
        if ( !v16 )
          v16 = *(unsigned int *)(v5 + 16) - (unsigned __int64)*(unsigned int *)(v6 + 16);
        v9 = v16 == 0;
        break;
      default:
        if ( *(_DWORD *)v5 != 69 )
        {
          if ( *(_DWORD *)v5 == 70 )
          {
            v20 = _mm_loadu_si128((const __m128i *)(v5 + 8));
            v22 = _mm_loadu_si128((const __m128i *)(v6 + 8));
            if ( *(float *)v20.m128i_i32 != *(float *)v22.m128i_i32
              || *(float *)&v20.m128i_i32[1] != *(float *)&v22.m128i_i32[1]
              || *(float *)&v20.m128i_i32[2] != *(float *)&v22.m128i_i32[2] )
            {
LABEL_25:
              v10 = 0;
LABEL_38:
              CExpressionValue::SetDataType(v5);
              *(_BYTE *)(v5 + 4) = 1;
              *(_BYTE *)(v5 + 8) = v10;
              --*((_DWORD *)this + 4);
              return v2;
            }
            v14 = *(float *)&v20.m128i_i32[3] == *(float *)&v22.m128i_i32[3];
LABEL_24:
            v10 = 1;
            if ( v14 )
              goto LABEL_38;
            goto LABEL_25;
          }
          if ( *(_DWORD *)v5 != 71 )
          {
            if ( *(_DWORD *)v5 != 104 )
            {
              if ( *(_DWORD *)v5 != 265 )
              {
                v18 = 2069;
                goto LABEL_14;
              }
              CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v6);
              Matrix4x4Value = CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v5);
              v9 = memcmp_0(Matrix4x4Value, v8, 0x40uLL) == 0;
              break;
            }
            Matrix3x2Value = CExpressionValue::GetMatrix3x2Value((CExpressionValue *)v5);
            v12 = *(_OWORD *)&Matrix3x2Value->m11;
            v21 = *Matrix3x2Value;
            v19 = *CExpressionValue::GetMatrix3x2Value(v13);
            if ( *(float *)&v12 != v19.m11
              || v21.m12 != v19.m12
              || v21.m21 != v19.m21
              || v21.m22 != v19.m22
              || v21.dx != v19.dx )
            {
              goto LABEL_25;
            }
            v14 = v21.dy == v19.dy;
            goto LABEL_24;
          }
        }
        v15 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(v6 + 8);
        if ( !v15 )
          v15 = *(_QWORD *)(v5 + 16) - *(_QWORD *)(v6 + 16);
        v9 = v15 == 0;
        break;
    }
    v10 = v9;
    goto LABEL_38;
  }
  v18 = 1969;
LABEL_14:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v18);
  return v2;
}
