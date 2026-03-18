/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18000E0A0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     MatrixPreTranslate2D @ 0x18000FC6C (MatrixPreTranslate2D.c)
 *     MatrixAppendScale2D @ 0x1800139C8 (MatrixAppendScale2D.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(__int64 a1, __int64 a2, CBaseMatrix *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  char v10; // r15
  __int64 v11; // rax
  int v13; // eax
  int v14; // eax
  char v15; // r9
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // [rsp+20h] [rbp-89h] BYREF
  float v19; // [rsp+24h] [rbp-85h]
  float v20; // [rsp+28h] [rbp-81h]
  float v21; // [rsp+2Ch] [rbp-7Dh]
  _DWORD v22[16]; // [rsp+30h] [rbp-79h] BYREF
  int v23; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v24[4]; // [rsp+80h] [rbp-29h] BYREF

  (*(void (__fastcall **)(__int64, _OWORD *, int *))(*(_QWORD *)a2 + 112LL))(a2, v24, &v23);
  MatrixPreTranslate2D((struct D2DMatrix *)v24);
  v6 = v24[1];
  v7 = v24[2];
  *(_OWORD *)a3 = v24[0];
  *((_OWORD *)a3 + 1) = v6;
  v8 = v24[3];
  *((_OWORD *)a3 + 2) = v7;
  *((_OWORD *)a3 + 3) = v8;
  CBaseMatrix::Transform2DBounds(a3, (const struct MilRectF *)&v23, (struct MilRectF *)&v18);
  v9 = *(_QWORD *)(a1 + 1200);
  v10 = 0;
  if ( v9 )
    v11 = v9 + 40;
  else
    v11 = 0LL;
  if ( a2 != v11 )
    return 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2) == 1 )
    goto LABEL_14;
  v13 = *(_DWORD *)(a1 + 944) - *(_DWORD *)(a1 + 936);
  if ( v13 < 0 )
    v13 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v13 - (float)(v20 - v18))) & _xmm) > 0.00390625 )
    goto LABEL_13;
  v14 = *(_DWORD *)(a1 + 948) - *(_DWORD *)(a1 + 940);
  if ( v14 < 0 )
    v14 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v14 - (float)(v21 - v19))) & _xmm) > 0.00390625 )
  {
LABEL_13:
    v10 = 1;
LABEL_14:
    MatrixPreTranslate2D(a3);
    if ( v10 )
    {
      if ( (float)(v16 - v18) > 0.0 && (float)(v17 - v19) > 0.0 )
      {
        v22[14] = 0;
        v22[13] = 0;
        v22[12] = 0;
        v22[11] = 0;
        v22[9] = 0;
        v22[8] = 0;
        v22[7] = 0;
        v22[6] = 0;
        v22[4] = 0;
        v22[3] = 0;
        v22[2] = 0;
        v22[1] = 0;
        v22[15] = 1065353216;
        v22[10] = 1065353216;
        v22[5] = 1065353216;
        v22[0] = 1065353216;
        MatrixAppendScale2D((struct D2DMatrix *)v22);
        D2DMatrixMultiply(a3, (const struct D2DMatrix *)v22, a3);
      }
    }
    else if ( v15 && *(_BYTE *)(a1 + 1274) )
    {
      MatrixPreTranslate2D(a3);
    }
  }
  return 0LL;
}
