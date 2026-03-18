/*
 * XREFs of ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x18002BF10
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180030F60 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 */

__int64 __fastcall CHwBitmapBrush::Release(CHwBitmapBrush *this)
{
  __int64 v1; // rbx
  unsigned int (__fastcall *v3)(CHwBitmapColorSource *__hidden); // rsi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = *(unsigned int (__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)v1 + 8LL);
    if ( v3 == CHwBitmapColorSource::Release )
      CHwBitmapColorSource::Release(*((CHwBitmapColorSource **)this + 2));
    else
      v3(*((CHwBitmapColorSource **)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  return 0LL;
}
