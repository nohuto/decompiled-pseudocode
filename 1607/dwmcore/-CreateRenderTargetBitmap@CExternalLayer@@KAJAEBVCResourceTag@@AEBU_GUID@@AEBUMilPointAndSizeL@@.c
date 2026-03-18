/*
 * XREFs of ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C
 * Callers:
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800127EC (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAP.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180012DA4 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ?Create@CEffectBrushLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEAPEAV1@@Z @ 0x18012E3AC (-Create@CEffectBrushLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBru.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x18012EC18 (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV-$CMatrix@UB.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@PEAPEAV1@@Z @ 0x18012F438 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV-$TValu.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18012FB2C (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 *     ?Create@CBlurLayer@@SAJPEAVCDrawingContext@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x18018C7E8 (-Create@CBlurLayer@@SAJPEAVCDrawingContext@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013FD4 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x180114140 (Template_qqqq.c)
 */

__int64 __fastcall CExternalLayer::CreateRenderTargetBitmap(
        int a1,
        struct _GUID *a2,
        _DWORD *a3,
        __int128 *a4,
        struct _LUID a5,
        int a6,
        char a7,
        char a8,
        char a9,
        __int64 a10)
{
  _QWORD *v10; // rsi
  __int128 v12; // xmm0
  __int64 v14; // xmm1_8
  int ScratchRenderTargetBitmap; // eax
  unsigned int v17; // edi
  int RenderTargetBitmap; // eax
  __int64 v20[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+D8h] [rbp+4Fh] BYREF

  v10 = (_QWORD *)a10;
  v12 = *a4;
  v22 = 0LL;
  v14 = *((_QWORD *)a4 + 2);
  *(_QWORD *)a10 = 0LL;
  *(_OWORD *)v20 = v12;
  a10 = 1LL;
  v21 = v14;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    Template_qqqq(
      *a3 + a3[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      *a3,
      a3[1],
      *a3 + a3[2],
      a3[1] + *((_BYTE *)a3 + 12));
  if ( a8 )
  {
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  a10,
                                  0,
                                  (__int64)v20);
    v17 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap >= 0 )
    {
LABEL_5:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qqqq(
          *a3 + a3[2],
          (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
          *a3,
          a3[1],
          *(_BYTE *)a3 + *((_BYTE *)a3 + 8),
          a3[1] + *((_BYTE *)a3 + 12));
      *v10 = v22;
      return v17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x2Fu);
  }
  else
  {
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (int)&qword_1801F0018,
                           a1,
                           a3[2],
                           a3[3],
                           a10,
                           0,
                           (__int64)v20,
                           1,
                           a2,
                           a5,
                           a6,
                           a7,
                           1,
                           a9,
                           (CD3DDeviceManager *)&v22);
    v17 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x40u);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v17;
}
