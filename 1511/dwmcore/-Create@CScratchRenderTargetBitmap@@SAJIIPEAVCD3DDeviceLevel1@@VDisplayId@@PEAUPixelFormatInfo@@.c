/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x18001D2A8
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800115B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180022838 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18002C9C0 (-Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18002CCF8 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        unsigned int a1,
        unsigned int a2,
        CD3DDeviceLevel1 *a3,
        unsigned int a4,
        struct PixelFormatInfo *a5,
        bool a6,
        __int64 *a7)
{
  enum DXGI_FORMAT v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // eax
  const char *v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]

  v10 = *(_DWORD *)a5;
  *a7 = 0LL;
  v11 = CD3DDeviceLevel1::CheckRenderTargetFormat(a3, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1Fu);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            256LL);
    v15 = v13;
    if ( v13 )
    {
      CHwTextureRenderTarget::CHwTextureRenderTarget(v13, a3, v14, a4);
      *(_BYTE *)(v15 + 248) = 0;
      *(_QWORD *)(v15 + 120) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
      *(_QWORD *)v15 = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
      *(_QWORD *)(v15 + 176) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
      *(_QWORD *)(v15 + 184) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v15 + 120));
      v19 = 24;
      v18 = "DWM Scratch Rendertarget";
      v16 = CHwTextureRenderTarget::Init(
              (CHwTextureRenderTarget *)v15,
              (const struct CResourceTag *)&v18,
              a1,
              a2,
              a5,
              a6);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2Bu);
      }
      else
      {
        *(_BYTE *)(v15 + 248) = 1;
        *a7 = v15;
        v15 = 0LL;
      }
      if ( v15 )
        CScratchRenderTargetBitmap::Release((CD3DDeviceLevel1 **)v15);
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x24u);
    }
  }
  return v12;
}
