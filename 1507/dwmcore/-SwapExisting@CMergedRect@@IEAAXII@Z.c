/*
 * XREFs of ?SwapExisting@CMergedRect@@IEAAXII@Z @ 0x18005117C
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180036A70 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180051368 (-GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CMergedRect::SwapExisting(const __m128i *this, int a2, int a3)
{
  __int8 *v3; // r10
  char v4; // r11
  __m128i v5; // xmm1
  __m128i v6; // [rsp+0h] [rbp-28h]

  v3 = &this->m128i_i8[a2];
  v4 = v3[64];
  if ( v4 )
    v5 = _mm_loadu_si128(&this[a2]);
  else
    v5 = v6;
  this[a2] = this[a3];
  v3[64] = 1;
  if ( v4 )
  {
    this[a3] = v5;
    this[4].m128i_i8[a3] = 1;
  }
  else
  {
    this[4].m128i_i8[a3] = 0;
  }
}
