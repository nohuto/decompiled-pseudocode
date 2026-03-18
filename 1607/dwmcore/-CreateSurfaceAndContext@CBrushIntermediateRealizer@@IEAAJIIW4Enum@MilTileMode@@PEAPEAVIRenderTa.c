/*
 * XREFs of ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180161544
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801608D8 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180161168 (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushIntermediateRealizer::CreateSurfaceAndContext(
        __int64 *a1,
        signed int a2,
        signed int a3,
        __int64 a4,
        void **a5,
        struct CDrawingContext **a6)
{
  unsigned int v7; // eax
  __int64 v9; // r8
  __int128 v11; // xmm0
  int RenderTargetBitmap; // eax
  unsigned int v13; // esi
  int v14; // eax
  struct CDrawingContext *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-79h]
  int v18[2]; // [rsp+80h] [rbp-19h] BYREF
  int v19; // [rsp+88h] [rbp-11h]
  __int64 v20[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh] BYREF
  float v23; // [rsp+B0h] [rbp+17h]
  float v24; // [rsp+B4h] [rbp+1Bh]

  v7 = 1;
  v9 = *a1;
  v19 = 22;
  v11 = *(_OWORD *)(v9 + 216);
  if ( *(_BYTE *)v9 )
    v7 = 3;
  v22 = v7;
  *(_OWORD *)v20 = v11;
  *(_QWORD *)v18 = "DWM Brush Intermediate";
  v21 = *(_QWORD *)(v9 + 232);
  RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                         (__int64)&qword_1801F0018,
                         (__int64)v18,
                         a2,
                         a3,
                         v7,
                         0,
                         (struct PixelFormatInfo *)v20,
                         1,
                         (struct _GUID *)(v9 + 240),
                         *(struct _LUID *)(v9 + 256),
                         DisplayId::None,
                         0,
                         0,
                         1,
                         a5);
  v13 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v17 = 195;
    goto LABEL_9;
  }
  v14 = CDrawingContext::Create(*(struct CComposition **)(*a1 + 192), a6);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xD0u);
  }
  else
  {
    v15 = *a6;
    v22 = 0LL;
    v23 = (float)a2 + 0.0;
    v24 = (float)a3 + 0.0;
    RenderTargetBitmap = CDrawingContext::PushGpuClipRectInternal((__int64)v15, 0LL, (float *)&v22, 1, 0, 0);
    v13 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v17 = 224;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, v17);
    }
  }
  return v13;
}
