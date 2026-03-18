/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18012B5E0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18011DABC (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18012A9F8 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbp
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // r9d
  const struct D2DMatrix *Matrix4x4Value; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v4 = a2;
  v6 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 843;
LABEL_17:
    v9 = v6;
    goto LABEL_14;
  }
  v8 = *((_QWORD *)this + 21) + v4;
  if ( !*(_DWORD *)v8 )
    *(_DWORD *)v8 = *(_DWORD *)a3;
  switch ( *(_DWORD *)a3 )
  {
    case 0x12:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0xCuLL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        *(_DWORD *)(v8 + 8) = *((_DWORD *)a3 + 2);
        return v7;
      }
      v12 = 867;
      goto LABEL_17;
    case 0x23:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x10uLL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        *(_QWORD *)(v8 + 8) = *((_QWORD *)a3 + 1);
        return v7;
      }
      v12 = 874;
      goto LABEL_17;
    case 0x34:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x14uLL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        *(_QWORD *)(v8 + 8) = *((_QWORD *)a3 + 1);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)a3 + 4);
        return v7;
      }
      v12 = 881;
      goto LABEL_17;
    case 0x45:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 888;
        goto LABEL_17;
      }
      goto LABEL_28;
    case 0x46:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 895;
        goto LABEL_17;
      }
      goto LABEL_28;
    case 0x47:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 902;
        goto LABEL_17;
      }
LABEL_28:
      *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)a3 + 8);
      return v7;
    case 0x68:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x20uLL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        *(struct D2D_MATRIX_3X2_F *)(v8 + 8) = *CExpressionValue::GetMatrix3x2Value(a3);
        return v7;
      }
      v12 = 909;
      goto LABEL_17;
    case 0x109:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x48uLL);
      v7 = v6;
      if ( v6 >= 0 )
      {
        Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(a3);
        *(_OWORD *)(v8 + 8) = *(_OWORD *)Matrix4x4Value;
        *(_OWORD *)(v8 + 24) = *((_OWORD *)Matrix4x4Value + 1);
        *(_OWORD *)(v8 + 40) = *((_OWORD *)Matrix4x4Value + 2);
        *(_OWORD *)(v8 + 56) = *((_OWORD *)Matrix4x4Value + 3);
        return v7;
      }
      v12 = 916;
      goto LABEL_17;
  }
  v7 = -2147024809;
  v12 = 923;
  v9 = -2147024809;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v12);
  return v7;
}
