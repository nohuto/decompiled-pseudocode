/*
 * XREFs of ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007C120
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18007CED0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800F3D6C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 */

void __fastcall CHwndRenderTarget::DesktopRectToRenderTargetRect(__int64 a1, const struct MilRectF *a2, _OWORD *a3)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  __int128 X; // [rsp+20h] [rbp-38h] BYREF

  CBaseMatrix::Transform2DBounds((CBaseMatrix *)(a1 + 132), a2, (struct MilRectF *)&X);
  v4 = *(float *)&X;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
  if ( v5 < 8388608.0 )
    v4 = (float)(int)floorf_0(*(float *)&X);
  *(float *)&X = v4;
  v6 = *((float *)&X + 1);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 1)) & _xmm);
  if ( v7 < 8388608.0 )
    v6 = (float)(int)floorf_0(*((float *)&X + 1));
  v8 = *((float *)&X + 2);
  *((float *)&X + 1) = v6;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 2)) & _xmm);
  if ( v9 < 8388608.0 )
    v8 = (float)(int)ceilf_0(*((float *)&X + 2));
  v10 = *((float *)&X + 3);
  *((float *)&X + 2) = v8;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 3)) & _xmm);
  if ( v11 < 8388608.0 )
    v10 = (float)(int)ceilf_0(*((float *)&X + 3));
  *((float *)&X + 3) = v10;
  *a3 = X;
}
