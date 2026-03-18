/*
 * XREFs of ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x180089B94
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushBitmap::GetBitmap(CMILBrushBitmap *this, struct IBitmapSource **a2)
{
  unsigned int v2; // edi
  struct IBitmapSource *v3; // rsi
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
  v3 = (struct IBitmapSource *)*((_QWORD *)this + 24);
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
