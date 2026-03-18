/*
 * XREFs of ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x1800844E4
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::GetBitmap(CMILBrushBitmap *this, struct IBitmapSource **a2)
{
  unsigned int v2; // ebx
  struct IBitmapSource *v3; // rcx
  int v5; // r9d
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a2 )
  {
    v5 = -2147024809;
    v6 = 177;
LABEL_7:
    v2 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v6);
    return v2;
  }
  v3 = (struct IBitmapSource *)*((_QWORD *)this + 25);
  *a2 = 0LL;
  if ( !v3 )
  {
    v5 = -2147467259;
    v6 = 186;
    goto LABEL_7;
  }
  *a2 = v3;
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 8LL))(v3);
  return v2;
}
