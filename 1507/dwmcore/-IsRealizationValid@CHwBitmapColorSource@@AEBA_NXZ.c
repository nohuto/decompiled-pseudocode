/*
 * XREFs of ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1800DE084
 * Callers:
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18013D89C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x18001CDD4 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationValid(CHwBitmapColorSource *this)
{
  char v1; // bl
  CHwBitmapColorSource *v2; // r11

  v1 = 0;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
         (unsigned int *)this + 43,
         (unsigned int *)this + 47) )
  {
    return CHwBitmapColorSource::IsRealizationCurrent(v2) != 0;
  }
  return v1;
}
