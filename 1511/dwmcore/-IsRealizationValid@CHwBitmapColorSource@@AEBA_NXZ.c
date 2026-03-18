/*
 * XREFs of ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1800FA7AC
 * Callers:
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18014D66C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180031ECC (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationValid(CHwBitmapColorSource *this)
{
  char v1; // bl
  CHwBitmapColorSource *v2; // r10

  v1 = 0;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)this + 172, (__int64)this + 188) )
    return CHwBitmapColorSource::IsRealizationCurrent(v2) != 0;
  return v1;
}
