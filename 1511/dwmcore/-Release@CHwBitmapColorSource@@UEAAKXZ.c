/*
 * XREFs of ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180030F60
 * Callers:
 *     ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x18002BF10 (-Release@CHwBitmapBrush@@UEAAKXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?Release@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x1800BE190 (-Release@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::Release(CHwBitmapColorSource *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CHwBitmapColorSource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  return v1;
}
