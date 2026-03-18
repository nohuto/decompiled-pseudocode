/*
 * XREFs of ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x1800842F0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x18001BD90 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBitmapBrush::Release(CHwBitmapBrush *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(CHwBitmapColorSource *); // rsi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v1 + 8LL);
    if ( v3 == CHwBitmapColorSource::Release )
      CHwBitmapColorSource::Release(*((CHwBitmapColorSource **)this + 2));
    else
      v3(*((CHwBitmapColorSource **)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  return 0LL;
}
