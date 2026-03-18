/*
 * XREFs of ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18002ECB0
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18002E9F4 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18002EE30 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18002EF68 (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushResourceRealizer::EnsureRealization(
        CBrushResourceRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  bool v5; // zf
  struct PixelFormatInfo *v7; // rdi
  CLegacyMilBrush *v8; // rcx
  void (__fastcall *v9)(CLegacyMilBrush *__hidden, struct PixelFormatInfo *); // rax
  __int64 v10; // rcx
  int BrushRealizationNoRef; // eax
  unsigned int v12; // ebp
  struct CMILBrush *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v5 = *(_BYTE *)a2 == 0;
  *((_DWORD *)a2 + 53) = *((_DWORD *)a3 + 52);
  if ( v5 )
  {
    *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)((char *)a3 + 212);
    *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)a3 + 228);
    *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)a3 + 244);
    *(_OWORD *)((char *)a2 + 52) = *(_OWORD *)((char *)a3 + 260);
    *((_DWORD *)a2 + 17) = *((_DWORD *)a3 + 69);
    *((_OWORD *)a2 + 11) = *(_OWORD *)((char *)a3 + 76);
  }
  v7 = (struct LegacyMilBrushContext *)((char *)a2 + 216);
  if ( a4 )
  {
    *(_OWORD *)v7 = *(_OWORD *)a4;
    *((_QWORD *)a2 + 29) = *((_QWORD *)a4 + 2);
  }
  else
  {
    v8 = (CLegacyMilBrush *)*((_QWORD *)this + 13);
    v9 = *(void (__fastcall **)(CLegacyMilBrush *__hidden, struct PixelFormatInfo *))(*(_QWORD *)v8 + 128LL);
    if ( v9 == CLegacyMilBrush::GetDefaultRealizationFormat )
    {
      CLegacyMilBrush::GetDefaultRealizationFormat(v8, v7);
    }
    else if ( (char *)v9 == (char *)CImageLegacyMilBrush::GetDefaultRealizationFormat )
    {
      CImageLegacyMilBrush::GetDefaultRealizationFormat(v8, (enum DXGI_FORMAT *)v7);
    }
    else
    {
      v9(v8, v7);
    }
  }
  *((_BYTE *)a2 + 140) = 0;
  *((_WORD *)a2 + 68) = 32085;
  *(_OWORD *)((char *)a2 + 72) = _xmm;
  *(_OWORD *)((char *)a2 + 88) = _xmm;
  *(_OWORD *)((char *)a2 + 104) = _xmm;
  *(_OWORD *)((char *)a2 + 120) = _xmm;
  v10 = *((_QWORD *)this + 12);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 12) = 0LL;
  }
  BrushRealizationNoRef = CLegacyMilBrush::GetBrushRealizationNoRef(*((CLegacyMilBrush **)this + 13), a2, &v14);
  v12 = BrushRealizationNoRef;
  if ( BrushRealizationNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationNoRef, 0x92u);
  }
  else
  {
    CLegacyMilBrushRealizer::SetRealizedBrush(this, v14, v7);
    if ( !*(_BYTE *)a2 && *((_BYTE *)a2 + 140) )
      CMILMatrix::Multiply(
        (struct LegacyMilBrushContext *)((char *)a2 + 4),
        (struct LegacyMilBrushContext *)((char *)a2 + 72));
  }
  return v12;
}
