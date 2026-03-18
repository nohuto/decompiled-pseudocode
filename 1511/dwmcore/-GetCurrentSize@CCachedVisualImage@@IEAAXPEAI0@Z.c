/*
 * XREFs of ?GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z @ 0x18005AB90
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005B3C0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CCachedVisualImage::GetCurrentSize(CCachedVisualImage *this, unsigned int *a2, unsigned int *a3)
{
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // [rsp+20h] [rbp-28h]
  float v8; // [rsp+20h] [rbp-28h]
  float v9[4]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( (int)CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, v9) >= 0 )
  {
    v5 = (float)(v9[2] - v9[0]) + 6291456.25;
    v7 = v5;
    v6 = v9[3] - v9[1];
    *a2 = (int)(LODWORD(v7) << 10) >> 11;
    v8 = v6 + 6291456.25;
    *a3 = (int)(LODWORD(v8) << 10) >> 11;
  }
}
