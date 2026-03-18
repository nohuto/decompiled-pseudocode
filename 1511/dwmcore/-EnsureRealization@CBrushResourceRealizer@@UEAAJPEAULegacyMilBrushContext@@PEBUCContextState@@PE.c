/*
 * XREFs of ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18005D460
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005D5E0 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005D748 (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?FreeRealizationResources@CLegacyMilBrushRealizer@@UEAAXXZ @ 0x18008A460 (-FreeRealizationResources@CLegacyMilBrushRealizer@@UEAAXXZ.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008A4AC (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushResourceRealizer::EnsureRealization(
        CBrushResourceRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  const struct PixelFormatInfo *v6; // rsi
  void (__fastcall *v7)(CImageLegacyMilBrush *, struct PixelFormatInfo *); // rbp
  int BrushRealizationNoRef; // eax
  unsigned int v9; // ebp
  struct CMILBrush *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  *((_DWORD *)a2 + 51) = *((_DWORD *)a3 + 50);
  if ( !*(_BYTE *)a2 )
  {
    *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)((char *)a3 + 204);
    *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)a3 + 220);
    *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)a3 + 236);
    *(_OWORD *)((char *)a2 + 52) = *(_OWORD *)((char *)a3 + 252);
    *(_OWORD *)((char *)a2 + 168) = *(_OWORD *)((char *)a3 + 72);
  }
  v6 = (struct LegacyMilBrushContext *)((char *)a2 + 208);
  if ( a4 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a4;
    *((_QWORD *)a2 + 28) = *((_QWORD *)a4 + 2);
  }
  else
  {
    v7 = *(void (__fastcall **)(CImageLegacyMilBrush *, struct PixelFormatInfo *))(**((_QWORD **)this + 13) + 120LL);
    if ( v7 == CLegacyMilBrush::GetDefaultRealizationFormat )
    {
      CLegacyMilBrush::GetDefaultRealizationFormat(
        *((CLegacyMilBrush **)this + 13),
        (struct LegacyMilBrushContext *)((char *)a2 + 208));
    }
    else if ( v7 == CImageLegacyMilBrush::GetDefaultRealizationFormat )
    {
      CImageLegacyMilBrush::GetDefaultRealizationFormat(
        *((CImageLegacyMilBrush **)this + 13),
        (struct LegacyMilBrushContext *)((char *)a2 + 208));
    }
    else
    {
      v7(*((CImageLegacyMilBrush **)this + 13), (struct LegacyMilBrushContext *)((char *)a2 + 208));
    }
  }
  *((_BYTE *)a2 + 132) = 0;
  *((_DWORD *)a2 + 32) = 1065353216;
  *((_DWORD *)a2 + 27) = 1065353216;
  *((_DWORD *)a2 + 22) = 1065353216;
  *((_DWORD *)a2 + 17) = 1065353216;
  *((_QWORD *)a2 + 15) = 0LL;
  *((_QWORD *)a2 + 14) = 0LL;
  *(_QWORD *)((char *)a2 + 100) = 0LL;
  *(_QWORD *)((char *)a2 + 92) = 0LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *((_QWORD *)a2 + 9) = 0LL;
  CLegacyMilBrushRealizer::FreeRealizationResources(this);
  BrushRealizationNoRef = CLegacyMilBrush::GetBrushRealizationNoRef(*((CLegacyMilBrush **)this + 13), a2, &v11);
  v9 = BrushRealizationNoRef;
  if ( BrushRealizationNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationNoRef, 0x92u);
  }
  else
  {
    CLegacyMilBrushRealizer::SetRealizedBrush(this, v11, v6);
    if ( !*(_BYTE *)a2 && *((_BYTE *)a2 + 132) )
      D2DMatrixMultiply(
        (struct LegacyMilBrushContext *)((char *)a2 + 4),
        (struct LegacyMilBrushContext *)((char *)a2 + 4),
        (struct LegacyMilBrushContext *)((char *)a2 + 68));
  }
  return v9;
}
