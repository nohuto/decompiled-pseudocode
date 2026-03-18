/*
 * XREFs of ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x1800AB090
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180081EF0 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapBrush::Release(CHwBitmapBrush *this)
{
  CHwBitmapColorSource *v2; // rcx
  void (*v3)(void); // rax

  v2 = (CHwBitmapColorSource *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)CHwBitmapColorSource::Release )
      CHwBitmapColorSource::Release(v2);
    else
      v3();
    *((_QWORD *)this + 2) = 0LL;
  }
  return 0LL;
}
