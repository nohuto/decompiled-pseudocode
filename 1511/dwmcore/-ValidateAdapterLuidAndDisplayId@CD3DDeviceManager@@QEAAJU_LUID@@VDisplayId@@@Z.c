/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8
 * Callers:
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18005C190 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x1800718E4 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180072670 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800F4924 (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800FEAA0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1800FEC50 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180144DC0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x18015F6E0 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18006FF48 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180070000 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180070DC8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800717A8 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  struct _LUID v3; // rdx
  CDisplayManager *v4; // rcx
  CD3DDeviceManager *v5; // r9
  int CurrentDisplaySet; // eax
  struct CDisplaySet *v7; // rbx
  unsigned int v8; // esi
  int v9; // eax
  int v11; // eax
  struct CDisplaySet *v12; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v12 = 0LL;
  if ( a3 == DisplayId::Invalid )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x8CDu);
  }
  else if ( DisplayId::IsSpecific((DisplayId *)&v14) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v4, &v12);
    v7 = v12;
    v8 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x8D4u);
    }
    else
    {
      v9 = CDisplaySet::ValidateAdapterLuidAndDisplayId((__int64)v12, a2, v14);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8D7u);
    }
    if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
    {
      CDisplaySet::~CDisplaySet(v12);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v12);
    }
  }
  else
  {
    v11 = CD3DDeviceManager::ValidateAdapterLuid(v5, v3);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8DBu);
  }
  return v8;
}
