/*
 * XREFs of ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18013FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18001467C (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x180081824 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E790 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Init(
        CHwSurfaceRenderTarget *this,
        int a2,
        int a3,
        CDisplay *a4,
        int a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  int ViewOfTexture; // eax
  __int64 v13; // rcx

  v7 = CHwFullScreenRenderTarget::Init(this, a2, a3, a4, a5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 88LL))(*((_QWORD *)this + 26));
    v10 = *((_QWORD *)this + 20);
    *((_BYTE *)this + 400) = v9;
    v11 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 48) = v11;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(v10 + 896),
                      *(struct ID3D11Texture2D **)(v11 + 136),
                      0LL,
                      1u,
                      (struct CD3DSurface **)this + 49);
    v8 = ViewOfTexture;
    if ( ViewOfTexture >= 0 )
    {
      *((_QWORD *)this + 51) = *(_QWORD *)(*((_QWORD *)a4 + 19) + 32LL);
      CHwSurfaceRenderTarget::UpdatePixelFormatInfo(this, (CHwSurfaceRenderTarget *)((char *)this + 176));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_x(v13, &EVTDESC_ETWGUID_STEREO_SWAPCHAINCREATEEVENT, *((_QWORD *)this + 51));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x41u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2Bu);
  }
  return v8;
}
