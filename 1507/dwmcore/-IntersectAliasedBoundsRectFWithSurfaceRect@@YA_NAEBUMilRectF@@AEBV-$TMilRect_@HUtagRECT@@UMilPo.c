/*
 * XREFs of ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x1800816B0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DBCD8 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     floor_0 @ 0x180099B72 (floor_0.c)
 */

char __fastcall IntersectAliasedBoundsRectFWithSurfaceRect(float *a1, _OWORD *a2, int *a3)
{
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  char result; // al

  if ( *a1 < 16777216.0 && a1[1] < 16777216.0 && a1[2] >= -16777215.0 && a1[3] >= -16777215.0 )
  {
    *(_OWORD *)a3 = *a2;
    if ( *a1 >= -16777215.0 )
    {
      v5 = ((int)floor_0((float)(*a1 * 16.0) + 0.5) + 7) >> 4;
      if ( v5 > *a3 )
        *a3 = v5;
    }
    v6 = a1[1];
    if ( v6 >= -16777215.0 )
    {
      v7 = ((int)floor_0((float)(v6 * 16.0) + 0.5) + 7) >> 4;
      if ( v7 > a3[1] )
        a3[1] = v7;
    }
    v8 = a1[2];
    if ( v8 < 16777216.0 )
    {
      v9 = ((int)floor_0((float)(v8 * 16.0) + 0.5) + 7) >> 4;
      if ( v9 < a3[2] )
        a3[2] = v9;
    }
    v10 = a1[3];
    if ( v10 < 16777216.0 )
    {
      v11 = ((int)floor_0((float)(v10 * 16.0) + 0.5) + 7) >> 4;
      if ( v11 < a3[3] )
        a3[3] = v11;
    }
    if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a3) )
      return 1;
  }
  a3[3] = 0;
  result = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  return result;
}
