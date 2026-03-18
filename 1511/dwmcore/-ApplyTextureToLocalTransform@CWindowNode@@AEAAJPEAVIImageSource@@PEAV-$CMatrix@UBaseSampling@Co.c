/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18001B4BC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     MatrixPreTranslate2D @ 0x18001D8FC (MatrixPreTranslate2D.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x18002E610 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     MatrixAppendScale2D @ 0x180068D90 (MatrixAppendScale2D.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(__int64 a1, __int64 a2, CBaseMatrix *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // eax
  float v13; // xmm4_4
  float v14; // xmm0_4
  int v15; // eax
  float v16; // [rsp+20h] [rbp-79h] BYREF
  float v17; // [rsp+24h] [rbp-75h]
  float v18; // [rsp+28h] [rbp-71h]
  float v19; // [rsp+2Ch] [rbp-6Dh]
  _DWORD v20[16]; // [rsp+30h] [rbp-69h] BYREF
  int v21; // [rsp+70h] [rbp-29h] BYREF
  _OWORD v22[4]; // [rsp+80h] [rbp-19h] BYREF

  (*(void (__fastcall **)(__int64, _OWORD *, int *))(*(_QWORD *)a2 + 56LL))(a2, v22, &v21);
  MatrixPreTranslate2D((struct D2DMatrix *)v22);
  v6 = v22[1];
  v7 = v22[2];
  *(_OWORD *)a3 = v22[0];
  *((_OWORD *)a3 + 1) = v6;
  v8 = v22[3];
  *((_OWORD *)a3 + 2) = v7;
  *((_OWORD *)a3 + 3) = v8;
  CBaseMatrix::Transform2DBounds(a3, (const struct MilRectF *)&v21, (struct MilRectF *)&v16);
  v9 = *(_QWORD *)(a1 + 1152);
  if ( v9 )
    v10 = v9 + 48;
  else
    v10 = 0LL;
  if ( a2 == v10 )
  {
    MatrixPreTranslate2D(a3);
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(*(_QWORD *)(a1 + 1152) + 40LL) == 1 )
    {
      if ( *(_BYTE *)(a1 + 1226) )
        MatrixPreTranslate2D(a3);
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 896) - *(_DWORD *)(a1 + 888);
      v13 = v18 - v16;
      if ( v12 < 0 )
        v12 = 0;
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v12 - v13)) & _xmm);
      if ( v14 > 0.00390625 )
        goto LABEL_16;
      v15 = *(_DWORD *)(a1 + 900) - *(_DWORD *)(a1 + 892);
      if ( v15 < 0 )
        v15 = 0;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v15 - (float)(v19 - v17))) & _xmm) > 0.00390625 )
      {
LABEL_16:
        if ( v13 > 0.0 && (float)(v19 - v17) > 0.0 )
        {
          v20[14] = 0;
          v20[13] = 0;
          v20[12] = 0;
          v20[11] = 0;
          v20[9] = 0;
          v20[8] = 0;
          v20[7] = 0;
          v20[6] = 0;
          v20[4] = 0;
          v20[3] = 0;
          v20[2] = 0;
          v20[1] = 0;
          v20[15] = 1065353216;
          v20[10] = 1065353216;
          v20[5] = 1065353216;
          v20[0] = 1065353216;
          MatrixAppendScale2D((struct D2DMatrix *)v20);
          D2DMatrixMultiply(a3, (const struct D2DMatrix *)v20, a3);
        }
      }
    }
  }
  return 0LL;
}
