/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180110228
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180101850 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18010F210 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18010F3A0 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
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
    v12 = 588;
LABEL_15:
    v9 = v6;
    goto LABEL_12;
  }
  v8 = *((_QWORD *)this + 21) + v4;
  if ( !*(_DWORD *)v8 )
    *(_DWORD *)v8 = *(_DWORD *)a3;
  switch ( *(_DWORD *)a3 )
  {
    case 0x11:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0xCuLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 612;
        goto LABEL_15;
      }
      *(_DWORD *)(v8 + 8) = *((_DWORD *)a3 + 2);
      goto LABEL_32;
    case 0x22:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x10uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 619;
        goto LABEL_15;
      }
      *(_QWORD *)(v8 + 8) = *((_QWORD *)a3 + 1);
      goto LABEL_32;
    case 0x33:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x14uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 626;
        goto LABEL_15;
      }
      *(_QWORD *)(v8 + 8) = *((_QWORD *)a3 + 1);
      *(_DWORD *)(v8 + 16) = *((_DWORD *)a3 + 4);
      goto LABEL_32;
    case 0x44:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 633;
        goto LABEL_15;
      }
      *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)a3 + 8);
      goto LABEL_32;
    case 0x65:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x20uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 640;
        goto LABEL_15;
      }
      *(struct D2D_MATRIX_3X2_F *)(v8 + 8) = *CExpressionValue::GetMatrix3x2Value(a3);
      goto LABEL_32;
    case 0x106:
      v6 = CExpression::EnsureCacheBounds(this, v4, 0x48uLL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 647;
        goto LABEL_15;
      }
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(a3);
      *(_OWORD *)(v8 + 8) = *(_OWORD *)Matrix4x4Value;
      *(_OWORD *)(v8 + 24) = *((_OWORD *)Matrix4x4Value + 1);
      *(_OWORD *)(v8 + 40) = *((_OWORD *)Matrix4x4Value + 2);
      *(_OWORD *)(v8 + 56) = *((_OWORD *)Matrix4x4Value + 3);
LABEL_32:
      CExpression::LogCacheAccess(this, 0, v4, (FLOAT *)a3);
      return v7;
  }
  v7 = -2147024809;
  v12 = 654;
  v9 = -2147024809;
LABEL_12:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v12);
  return v7;
}
