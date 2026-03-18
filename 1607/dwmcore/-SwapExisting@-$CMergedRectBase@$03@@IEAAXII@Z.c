/*
 * XREFs of ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18002D008
 * Callers:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CD5C (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18002CF74 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180051AA0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CMergedRectBase<4>::SwapExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  char v4; // r11
  __m128i v5; // xmm1
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-28h]

  v3 = a2 + a1;
  v4 = *(_BYTE *)(v3 + 64);
  if ( v4 )
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 16LL * a2));
  else
    v5 = v7;
  result = a3;
  *(_OWORD *)(a1 + 16LL * a2) = *(_OWORD *)(a1 + 16LL * a3);
  *(_BYTE *)(v3 + 64) = 1;
  if ( v4 )
  {
    *(__m128i *)(a1 + 16LL * a3) = v5;
    *(_BYTE *)(a3 + a1 + 64) = 1;
  }
  else
  {
    *(_BYTE *)(a3 + a1 + 64) = 0;
  }
  return result;
}
