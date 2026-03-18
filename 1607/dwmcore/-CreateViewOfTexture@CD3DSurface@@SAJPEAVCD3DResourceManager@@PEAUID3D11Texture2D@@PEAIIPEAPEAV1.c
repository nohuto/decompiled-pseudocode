/*
 * XREFs of ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800B27C8
 * Callers:
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180016FA4 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180079D20 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18007B9B0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18017F820 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18017F940 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180079948 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x180079BC4 (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::CreateViewOfTexture(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        char *a3,
        unsigned int a4,
        struct CD3DSurface **a5)
{
  CD3DSurface *v9; // rax
  CD3DSurface *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  *a5 = 0LL;
  v9 = (CD3DSurface *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        240LL);
  if ( v9 )
    v10 = CD3DSurface::CD3DSurface(v9, a2);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CD3DSurface *))v10)(v10);
    v11 = CD3DSurface::Init(v10, a1, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8Cu);
      CMILPoolResource::Release(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x86u);
  }
  return v12;
}
