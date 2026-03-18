/*
 * XREFs of ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeRealizationResources@CBrushRealizer@@UEAAXXZ @ 0x180081340 (-FreeRealizationResources@CBrushRealizer@@UEAAXXZ.c)
 *     ?SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008138C (-SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ?GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180083690 (-GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800837D8 (-GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ?GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180085AF0 (-GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBrushResourceRealizer::EnsureRealization(
        CBrushResourceRealizer *this,
        struct BrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  const struct PixelFormatInfo *v6; // rsi
  void (__fastcall *v7)(CImageBrush *__hidden, struct PixelFormatInfo *); // rbp
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
  v6 = (struct BrushContext *)((char *)a2 + 208);
  if ( a4 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a4;
    *((_QWORD *)a2 + 28) = *((_QWORD *)a4 + 2);
  }
  else
  {
    v7 = *(void (__fastcall **)(CImageBrush *__hidden, struct PixelFormatInfo *))(**((_QWORD **)this + 13) + 112LL);
    if ( v7 == CBrush::GetDefaultRealizationFormat )
    {
      CBrush::GetDefaultRealizationFormat(*((CBrush **)this + 13), (struct BrushContext *)((char *)a2 + 208));
    }
    else if ( v7 == CImageBrush::GetDefaultRealizationFormat )
    {
      CImageBrush::GetDefaultRealizationFormat(*((CImageBrush **)this + 13), (struct BrushContext *)((char *)a2 + 208));
    }
    else
    {
      v7(*((CImageBrush **)this + 13), (struct BrushContext *)((char *)a2 + 208));
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
  CBrushRealizer::FreeRealizationResources(this);
  BrushRealizationNoRef = CBrush::GetBrushRealizationNoRef(*((CBrush **)this + 13), a2, &v11);
  v9 = BrushRealizationNoRef;
  if ( BrushRealizationNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationNoRef, 0x92u);
  }
  else
  {
    CBrushRealizer::SetRealizedBrush(this, v11, v6);
    if ( !*(_BYTE *)a2 && *((_BYTE *)a2 + 132) )
      D2DMatrixMultiply(
        (struct BrushContext *)((char *)a2 + 4),
        (struct BrushContext *)((char *)a2 + 4),
        (struct BrushContext *)((char *)a2 + 68));
  }
  return v9;
}
