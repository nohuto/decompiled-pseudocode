/*
 * XREFs of ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z @ 0x1800341A8
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B8AC (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        const struct MilRectF *a2)
{
  unsigned int v2; // xmm1_4
  unsigned int v3; // xmm2_4
  unsigned int v4; // xmm3_4
  int v5; // xmm4_4
  char v6; // r10
  __int64 v7; // r11
  unsigned int v8; // xmm4_4
  __int128 v10; // xmm0
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  LODWORD(v11) = *(_DWORD *)a2;
  *(_QWORD *)((char *)&v11 + 4) = __PAIR64__(v4, v3);
  HIDWORD(v11) = v5;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo((char *)this + 24, &v11) )
  {
    *(_QWORD *)&v11 = __PAIR64__(v3, v2);
    v6 = 1;
    *((_QWORD *)&v11 + 1) = __PAIR64__(v8, v4);
    v10 = v11;
    *(_BYTE *)(v7 + 40) = 1;
    *(_OWORD *)(v7 + 24) = v10;
  }
  return v6;
}
