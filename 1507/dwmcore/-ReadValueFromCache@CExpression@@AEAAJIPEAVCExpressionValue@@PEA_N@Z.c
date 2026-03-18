/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18010FFE0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180101850 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18010F210 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18010F3A0 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
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
  int v12; // xmm6_4
  unsigned int v14; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 678;
LABEL_15:
    v11 = v8;
    goto LABEL_12;
  }
  v10 = *((_QWORD *)this + 21) + v5;
  if ( *(_DWORD *)v10 )
  {
    if ( *(_DWORD *)v10 == 17 )
    {
      v8 = CExpression::EnsureCacheBounds(this, v5, 0xCuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 699;
        goto LABEL_15;
      }
      v12 = *(_DWORD *)(v10 + 8);
      CExpressionValue::SetDataType(a3);
      *((_DWORD *)a3 + 2) = v12;
    }
    else if ( *(_DWORD *)v10 == 34 )
    {
      v8 = CExpression::EnsureCacheBounds(this, v5, 0x10uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 706;
        goto LABEL_15;
      }
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v10 + 8);
    }
    else if ( *(_DWORD *)v10 == 51 )
    {
      v8 = CExpression::EnsureCacheBounds(this, v5, 0x14uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 713;
        goto LABEL_15;
      }
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v10 + 8);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v10 + 16);
    }
    else
    {
      if ( *(_DWORD *)v10 != 68 )
      {
        if ( *(_DWORD *)v10 == 101 )
        {
          v8 = CExpression::EnsureCacheBounds(this, v5, 0x20uLL);
          v9 = v8;
          if ( v8 < 0 )
          {
            v14 = 727;
            goto LABEL_15;
          }
          CExpressionValue::SetMatrix3x2Value(a3, (const struct D2D_MATRIX_3X2_F *)(v10 + 8));
        }
        else
        {
          if ( *(_DWORD *)v10 != 262 )
          {
            v9 = -2147024809;
            v14 = 741;
            v11 = -2147024809;
LABEL_12:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v14);
            return v9;
          }
          v8 = CExpression::EnsureCacheBounds(this, v5, 0x48uLL);
          v9 = v8;
          if ( v8 < 0 )
          {
            v14 = 734;
            goto LABEL_15;
          }
          CExpressionValue::SetMatrix4x4Value(a3, (const struct D2DMatrix *)(v10 + 8));
        }
LABEL_33:
        CExpression::LogCacheAccess(this, 1, v5, (FLOAT *)a3);
        *a4 = 1;
        return v9;
      }
      v8 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 720;
        goto LABEL_15;
      }
      CExpressionValue::SetDataType(a3);
      *(_OWORD *)((char *)a3 + 8) = *(_OWORD *)(v10 + 8);
    }
    *((_BYTE *)a3 + 4) = 1;
    goto LABEL_33;
  }
  *a4 = 0;
  return v9;
}
