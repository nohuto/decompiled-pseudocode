/*
 * XREFs of ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801384AC
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801377FC (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801380A4 (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 * Callees:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x180071430 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushIntermediateRealizer::CreateSurfaceAndContext(
        __int64 *a1,
        signed int a2,
        signed int a3,
        __int64 a4,
        struct CD3DDeviceLevel1 *a5,
        struct CDrawingContext **a6)
{
  unsigned int v7; // eax
  __int64 v9; // r8
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int RenderTargetBitmap; // eax
  unsigned int v14; // esi
  int v15; // eax
  struct CDrawingContext *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-69h]
  struct _LUID v19; // [rsp+48h] [rbp-41h]
  int v20[2]; // [rsp+70h] [rbp-19h] BYREF
  int v21; // [rsp+78h] [rbp-11h]
  __int64 v22[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh] BYREF
  float v25; // [rsp+A0h] [rbp+17h]
  float v26; // [rsp+A4h] [rbp+1Bh]

  v7 = 1;
  v9 = *a1;
  v21 = 22;
  v11 = *(_OWORD *)(v9 + 208);
  if ( *(_BYTE *)v9 )
    v7 = 3;
  v12 = *(_QWORD *)(v9 + 224);
  v24 = v7;
  v19 = *(struct _LUID *)(v9 + 248);
  *(_QWORD *)v20 = "DWM Brush Intermediate";
  *(_OWORD *)v22 = v11;
  v23 = v12;
  RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                         (__int64)&qword_1801A3D78,
                         (__int64)v20,
                         a2,
                         a3,
                         v7,
                         0,
                         (__int64)v22,
                         1,
                         (struct _GUID *)(v9 + 232),
                         v19,
                         DisplayId::None,
                         0,
                         a5);
  v14 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v18 = 193;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, v18);
    return v14;
  }
  v15 = CDrawingContext::Create(*(struct CComposition **)(*a1 + 184), a6);
  v14 = v15;
  if ( v15 >= 0 )
  {
    v16 = *a6;
    v24 = 0LL;
    v25 = (float)a2 + 0.0;
    v26 = (float)a3 + 0.0;
    RenderTargetBitmap = CDrawingContext::PushGpuClipRectInternal((__int64)v16, 0LL, (float *)&v24, 1, 0, 0);
    v14 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v18 = 222;
      goto LABEL_9;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xCEu);
  }
  return v14;
}
