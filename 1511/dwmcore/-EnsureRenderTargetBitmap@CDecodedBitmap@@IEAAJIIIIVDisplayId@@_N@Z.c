/*
 * XREFs of ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z @ 0x180160594
 * Callers:
 *     ?Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVIBitmapSource@@@Z @ 0x18016041C (-Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPAC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x180071430 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateVideoProcessor@CD3DDeviceLevel1@@QEAAJIIIIPEAPEAUID3D11VideoProcessorEnumerator@@PEAPEAUID3D11VideoProcessor@@@Z @ 0x1801455B8 (-CreateVideoProcessor@CD3DDeviceLevel1@@QEAAJIIIIPEAPEAUID3D11VideoProcessorEnumerator@@PEAPEAUI.c)
 *     ?ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ @ 0x18015FE8C (-ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ.c)
 */

__int64 __fastcall CDecodedBitmap::EnsureRenderTargetBitmap(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  struct CD3DDeviceLevel1 *v7; // rbx
  __int64 v8; // r14
  unsigned int v11; // esi
  int RenderTargetBitmap; // eax
  __int64 v13; // rsi
  __int64 v14; // rsi
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v16; // rbx
  int VideoProcessor; // eax
  struct _LUID v19; // [rsp+50h] [rbp-49h]
  CD3DDeviceLevel1 *v20; // [rsp+78h] [rbp-21h] BYREF
  int v21[2]; // [rsp+80h] [rbp-19h] BYREF
  int v22; // [rsp+88h] [rbp-11h]
  __int64 v23; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v24[8]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+7h]

  v7 = (struct CD3DDeviceLevel1 *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  v11 = 0;
  if ( v8
    && *(_DWORD *)(a1 + 48) == a4
    && *(_DWORD *)(a1 + 52) == a5
    && *(_DWORD *)(a1 + 60) == a2
    && *(_DWORD *)(a1 + 64) == a3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 200LL))(v8, a6);
  }
  else
  {
    v23 = 0x300000057LL;
    GetPixelFormatColorSpace(87, (enum ColorSpace *)v24);
    v25 = 0LL;
    CDecodedBitmap::ReleaseRenderTargetBitmap((CDecodedBitmap *)a1);
    *(_QWORD *)v21 = "DWM Rendertarget (VPBlt)";
    v19 = *(struct _LUID *)(a1 + 32);
    v22 = 24;
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_1801A3D78,
                           (__int64)v21,
                           a4,
                           a5,
                           1LL,
                           0,
                           (__int64)&v23,
                           1,
                           (struct _GUID *)(a1 + 16),
                           v19,
                           a6,
                           a7,
                           v7);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 72);
      if ( v13 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*(_QWORD *)(a1 + 72));
        *(_QWORD *)(a1 + 72) = 0LL;
      }
      v14 = *(_QWORD *)(a1 + 80);
      if ( v14 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 16LL))(*(_QWORD *)(a1 + 80));
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      D3DDevice = CD3DDeviceManager::GetD3DDevice(
                    (CD3DDeviceManager *)&g_D3DDeviceManager,
                    (const struct _GUID *)(a1 + 16),
                    *(struct _LUID *)(a1 + 32),
                    &v20);
      v16 = v20;
      v11 = D3DDevice;
      if ( D3DDevice >= 0 )
      {
        VideoProcessor = CD3DDeviceLevel1::CreateVideoProcessor(
                           v20,
                           a2,
                           a3,
                           a4,
                           a5,
                           (struct ID3D11VideoProcessorEnumerator **)(a1 + 72),
                           (struct ID3D11VideoProcessor **)(a1 + 80));
        v11 = VideoProcessor;
        if ( VideoProcessor >= 0 )
        {
          *(_DWORD *)(a1 + 60) = a2;
          *(_DWORD *)(a1 + 64) = a3;
          *(_DWORD *)(a1 + 48) = a4;
          *(_DWORD *)(a1 + 52) = a5;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, VideoProcessor, 0x94u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x8Du);
      }
      if ( v16 )
        CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v16 + 384));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x83u);
    }
  }
  return v11;
}
