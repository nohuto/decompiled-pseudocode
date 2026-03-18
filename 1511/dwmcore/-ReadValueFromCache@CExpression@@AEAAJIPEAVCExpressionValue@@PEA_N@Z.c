/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18012B334
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18011DABC (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18012A9F8 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18012AA90 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  __int64 v5; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // xmm6_4
  unsigned int v15; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 945;
LABEL_17:
    v11 = v8;
    goto LABEL_14;
  }
  v10 = *((_QWORD *)this + 21) + v5;
  if ( *(_DWORD *)v10 )
  {
    if ( *(_DWORD *)v10 == 18 )
    {
      v8 = CExpression::EnsureCacheBounds(this, v5, 0xCuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v15 = 966;
        goto LABEL_17;
      }
      v13 = *(_DWORD *)(v10 + 8);
      CExpressionValue::SetDataType(a3);
      *((_DWORD *)a3 + 2) = v13;
    }
    else if ( *(_DWORD *)v10 == 35 )
    {
      v8 = CExpression::EnsureCacheBounds(this, v5, 0x10uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v15 = 973;
        goto LABEL_17;
      }
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v10 + 8);
    }
    else if ( *(_DWORD *)v10 == 52 )
    {
      v8 = CExpression::EnsureCacheBounds(this, v5, 0x14uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v15 = 980;
        goto LABEL_17;
      }
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v10 + 8);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v10 + 16);
    }
    else
    {
      if ( *(_DWORD *)v10 == 69 )
      {
        v8 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v15 = 987;
          goto LABEL_17;
        }
      }
      else if ( *(_DWORD *)v10 == 70 )
      {
        v8 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v15 = 994;
          goto LABEL_17;
        }
      }
      else
      {
        if ( *(_DWORD *)v10 != 71 )
        {
          if ( *(_DWORD *)v10 == 104 )
          {
            v8 = CExpression::EnsureCacheBounds(this, v5, 0x20uLL);
            v9 = v8;
            if ( v8 < 0 )
            {
              v15 = 1008;
              goto LABEL_17;
            }
            CExpressionValue::SetMatrix3x2Value(a3, (const struct D2D_MATRIX_3X2_F *)(v10 + 8));
          }
          else
          {
            if ( *(_DWORD *)v10 != 265 )
            {
              v9 = -2147024809;
              v15 = 1022;
              v11 = -2147024809;
LABEL_14:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v15);
              return v9;
            }
            v8 = CExpression::EnsureCacheBounds(this, v5, 0x48uLL);
            v9 = v8;
            if ( v8 < 0 )
            {
              v15 = 1015;
              goto LABEL_17;
            }
            CExpressionValue::SetMatrix4x4Value(a3, (const struct D2DMatrix *)(v10 + 8));
          }
LABEL_41:
          CExpression::LogCacheAccess(this, v12, v5, (FLOAT *)a3);
          *a4 = 1;
          return v9;
        }
        v8 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v15 = 1001;
          goto LABEL_17;
        }
      }
      CExpressionValue::SetDataType(a3);
      *(_OWORD *)((char *)a3 + 8) = *(_OWORD *)(v10 + 8);
    }
    *((_BYTE *)a3 + 4) = 1;
    goto LABEL_41;
  }
  *a4 = 0;
  return v9;
}
