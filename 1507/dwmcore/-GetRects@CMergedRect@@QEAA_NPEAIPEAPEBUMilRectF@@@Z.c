/*
 * XREFs of ?GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180051368
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007CB50 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1800F3A0C (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1800F3B24 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SwapExisting@CMergedRect@@IEAAXII@Z @ 0x18005117C (-SwapExisting@CMergedRect@@IEAAXII@Z.c)
 *     ?Optimize@CMergedRect@@IEAAX_N@Z @ 0x1800511FC (-Optimize@CMergedRect@@IEAAX_N@Z.c)
 */

bool __fastcall CMergedRect::GetRects(__m128i *this, unsigned int *a2, __m128i **a3)
{
  int v4; // esi
  unsigned int v7; // ecx
  bool result; // al
  unsigned int v9; // r8d
  __m128i *v10; // rbp

  v4 = 0;
  CMergedRect::Optimize(this, 1);
  if ( (unsigned int)(this[4].m128i_i32[2] - 2) <= 1 )
  {
    v9 = 0;
    v10 = this + 4;
    do
    {
      if ( v10->m128i_i8[0] )
      {
        if ( v9 != v4 )
          CMergedRect::SwapExisting(this, v4, v9);
        ++v4;
      }
      ++v9;
      v10 = (__m128i *)((char *)v10 + 1);
    }
    while ( v9 < 4 );
  }
  v7 = this[4].m128i_u32[2];
  result = v7 != 0;
  *a2 = v7;
  *a3 = this;
  return result;
}
