/*
 * XREFs of ?CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180116A08
 * Callers:
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180117480 (-HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800DD190 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DD224 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?CalculateSwapChainRotation@CPrimitive@@AEBA_NMMW4DXGI_MODE_ROTATION@@PEAVCMILMatrix@@PEA_N@Z @ 0x180116D30 (-CalculateSwapChainRotation@CPrimitive@@AEBA_NMMW4DXGI_MODE_ROTATION@@PEAVCMILMatrix@@PEA_N@Z.c)
 */

void __fastcall CPrimitive::CalculateSwapChainContentSize(
        CPrimitive *this,
        struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v3; // rax
  CCompositionSurfaceInfo *v6; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rdi
  enum DXGI_MODE_ROTATION v8; // eax
  CPrimitive *v9; // rcx
  float v10; // xmm2_4
  float v11; // xmm1_4
  unsigned __int64 v12; // xmm1_8
  bool v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_SIZE_F v16; // [rsp+40h] [rbp-C0h]
  float v17; // [rsp+48h] [rbp-B8h] BYREF
  float v18; // [rsp+4Ch] [rbp-B4h]
  float v19; // [rsp+50h] [rbp-B0h]
  float v20; // [rsp+54h] [rbp-ACh]
  float v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+64h] [rbp-9Ch]
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  int v25; // [rsp+70h] [rbp-90h]
  float v26; // [rsp+74h] [rbp-8Ch]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  int v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+84h] [rbp-7Ch]
  int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  int v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+94h] [rbp-6Ch]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  float v37[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  int v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E4h] [rbp-1Ch]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  unsigned int v48; // [rsp+F0h] [rbp-10h]
  unsigned int v49; // [rsp+F4h] [rbp-Ch]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  _BYTE v52[64]; // [rsp+100h] [rbp+0h] BYREF

  v3 = *((_QWORD *)this + 7);
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v6 = *(CCompositionSurfaceInfo **)(v3 + 432);
  v32 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0x3F80000000000000LL;
  v40 = 0;
  v39 = 0;
  v13 = 0;
  v36 = 1065353216;
  v31 = 1065353216;
  v26 = 1.0;
  v21 = 1.0;
  v51 = 1065353216;
  v46 = 1065353216;
  v38 = 1065353216LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v6);
  CBitmapRealization::GetSourceRect((__int64)RenderingRealizationNoRef, (__int64)&v17);
  v8 = (*(unsigned int (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)RenderingRealizationNoRef + 104LL))(RenderingRealizationNoRef);
  if ( CPrimitive::CalculateSwapChainRotation(v9, v19 - v17, v20 - v18, v8, (struct CMILMatrix *)v52, &v13) )
  {
    D2DMatrixMultiply((struct D2DMatrix *)&v21, (const struct D2DMatrix *)&v21, (const struct D2DMatrix *)v52);
    D2DMatrixMultiply((struct D2DMatrix *)&v38, (const struct D2DMatrix *)&v38, (const struct D2DMatrix *)v52);
  }
  if ( CBitmapRealization::CalcImageTransform(RenderingRealizationNoRef, (struct CMILMatrix *)v52) )
    D2DMatrixMultiply((struct D2DMatrix *)&v21, (const struct D2DMatrix *)&v21, (const struct D2DMatrix *)v52);
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v21, (const struct MilRectF *)&v17, (struct MilRectF *)v37);
  v14 = 0;
  v15 = 0;
  (*(void (__fastcall **)(__int64, int *, int *))(*((_QWORD *)RenderingRealizationNoRef + 14) + 24LL))(
    (__int64)RenderingRealizationNoRef + 112,
    &v14,
    &v15);
  v10 = v37[2] - v37[0];
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v36 = 1065353216;
  v31 = 1065353216;
  v16.width = (float)((float)(v19 - v17) / (float)v14) * (float)(v37[2] - v37[0]);
  v16.height = (float)((float)(v20 - v18) / (float)v15) * (float)(v37[3] - v37[1]);
  if ( v13 )
    v11 = v37[3] - v37[1];
  else
    v11 = v37[2] - v37[0];
  v21 = 1.0 / v11;
  if ( !v13 )
    v10 = v37[3] - v37[1];
  v26 = 1.0 / v10;
  D2DMatrixMultiply((struct D2DMatrix *)&v38, (const struct D2DMatrix *)&v38, (const struct D2DMatrix *)&v21);
  *a2 = v16;
  if ( a3 )
  {
    *(_QWORD *)v37 = v38;
    *(_QWORD *)&v37[2] = v41;
    v12 = _mm_unpacklo_ps((__m128)v48, (__m128)v49).m128_u64[0];
    *(_OWORD *)&a3->m11 = *(_OWORD *)v37;
    *(_QWORD *)&a3->m[2][0] = v12;
  }
}
