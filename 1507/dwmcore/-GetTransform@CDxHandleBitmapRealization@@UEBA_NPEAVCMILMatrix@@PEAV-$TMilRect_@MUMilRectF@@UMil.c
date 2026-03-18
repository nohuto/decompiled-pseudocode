/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E9E0
 * Callers:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007E10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008AD0 (-GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180007A00 (-GetRotation@CDxHandleBitmapRealization@@UEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x18001E7A0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Rotate180@CBaseMatrix@@QEAAXXZ @ 0x180123A14 (-Rotate180@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate270@CBaseMatrix@@QEAAXXZ @ 0x180123A88 (-Rotate270@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CBaseMatrix@@QEAAXXZ @ 0x180123B00 (-Rotate90@CBaseMatrix@@QEAAXXZ.c)
 */

BOOL __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  _DWORD *v6; // rbx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  bool v15; // zf
  float v16; // xmm7_4
  float v17; // xmm6_4
  __int64 (__fastcall *v18)(CDxHandleBitmapRealization *); // r14
  int v19; // eax
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  void (__fastcall *v26)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // r15
  float v27; // xmm0_4
  float v28; // xmm4_4
  unsigned int v29; // [rsp+28h] [rbp-79h] BYREF
  unsigned int v30[3]; // [rsp+2Ch] [rbp-75h] BYREF
  int v31; // [rsp+38h] [rbp-69h] BYREF
  __int64 v32; // [rsp+3Ch] [rbp-65h]
  __int64 v33; // [rsp+44h] [rbp-5Dh]
  int v34; // [rsp+4Ch] [rbp-55h]
  __int64 v35; // [rsp+50h] [rbp-51h]
  __int64 v36; // [rsp+58h] [rbp-49h]
  int v37; // [rsp+60h] [rbp-41h]
  __int64 v38; // [rsp+64h] [rbp-3Dh]
  __int64 v39; // [rsp+6Ch] [rbp-35h]
  int v40; // [rsp+74h] [rbp-2Dh]
  __int128 v41; // [rsp+78h] [rbp-29h]

  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_QWORD *)(a2 + 52) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 40) = 1065353216;
  *(_DWORD *)(a2 + 20) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  v41 = v3;
  if ( !*(_QWORD *)(a1 + 344) )
    goto LABEL_16;
  v6 = (_DWORD *)(a1 - 112);
  if ( *(_DWORD *)(a1 - 112 + 296) != 2
    || v6[48]
    || (v7 = v6[51], v8 = v6[49], v7 <= v8)
    || (v9 = v6[52], v10 = v6[50], v9 <= v10) )
  {
    v26 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*((_QWORD *)v6 + 14)
                                                                                              + 24LL);
    if ( v26 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize((CDxHandleBitmapRealization *)(v6 + 28), v30, &v29);
    else
      v26((CDxHandleBitmapRealization *)(v6 + 28), v30, &v29);
    v11 = 0.0;
    v12 = 0.0;
    v13 = (float)(int)v30[0];
    v14 = (float)(int)v29;
  }
  else
  {
    v11 = (float)v8;
    v12 = (float)v10;
    *(float *)(a2 + 48) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v8) ^ _xmm) + 0.0;
    v13 = (float)v7;
    *(float *)(a2 + 52) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v10) ^ _xmm) + 0.0;
    v14 = (float)v9;
  }
  v15 = v6[74] == 2;
  *((float *)&v41 + 3) = v14;
  v16 = v14 - v12;
  *((float *)&v41 + 2) = v13;
  v17 = v13 - v11;
  *(_QWORD *)&v41 = __PAIR64__(LODWORD(v12), LODWORD(v11));
  v39 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v40 = 1065353216;
  v37 = 1065353216;
  v34 = 1065353216;
  v31 = 1065353216;
  if ( v15 && !v6[48] )
  {
    v18 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v6 + 104LL);
    v19 = v18 == CDxHandleBitmapRealization::GetRotation
        ? CDxHandleBitmapRealization::GetRotation((CDxHandleBitmapRealization *)v6)
        : v18((CDxHandleBitmapRealization *)v6);
    if ( v19 >= 2 )
    {
      switch ( v19 )
      {
        case 2:
          CBaseMatrix::Rotate270((CBaseMatrix *)&v31);
          v27 = *(float *)&v39 + v17;
          v28 = *((float *)&v38 + 1) + 0.0;
          break;
        case 3:
          CBaseMatrix::Rotate180((CBaseMatrix *)&v31);
          v27 = *(float *)&v39 + v16;
          v28 = *((float *)&v38 + 1) + v17;
          break;
        case 4:
          CBaseMatrix::Rotate90((CBaseMatrix *)&v31);
          v27 = *(float *)&v39 + 0.0;
          v28 = *((float *)&v38 + 1) + v16;
          break;
        default:
          goto LABEL_12;
      }
      *((float *)&v38 + 1) = v28;
      *(float *)&v39 = v27;
      D2DMatrixMultiply((struct D2DMatrix *)a2, (const struct D2DMatrix *)a2, (const struct D2DMatrix *)&v31);
    }
  }
LABEL_12:
  v15 = v6[74] == 2;
  v39 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v40 = 1065353216;
  v37 = 1065353216;
  v34 = 1065353216;
  v31 = 1065353216;
  if ( v15 && !v6[48] )
  {
    v20 = v6[68];
    v31 = v6[67];
    v21 = v6[69];
    LODWORD(v32) = v20;
    v22 = v6[70];
    HIDWORD(v33) = v21;
    v23 = v6[71];
    v34 = v22;
    v24 = v6[72];
    HIDWORD(v38) = v23;
    LODWORD(v39) = v24;
    if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)&v31) )
      D2DMatrixMultiply((struct D2DMatrix *)a2, (const struct D2DMatrix *)a2, (const struct D2DMatrix *)&v31);
  }
LABEL_16:
  if ( a3 )
    *a3 = v41;
  return D2DMatrixIsIdentity((const struct D2DMatrix *)a2) == 0;
}
