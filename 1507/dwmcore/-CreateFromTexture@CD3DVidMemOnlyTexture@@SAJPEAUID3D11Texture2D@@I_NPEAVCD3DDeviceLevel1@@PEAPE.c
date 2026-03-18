/*
 * XREFs of ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800144F8
 * Callers:
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800142E4 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180014454 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18013B0CC (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z.c)
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x180140AA0 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z @ 0x18014F498 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z.c)
 *     ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x180152744 (-Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap.c)
 * Callees:
 *     ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x180015D1C (-SetAsEvictable@CD3DResource@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180084C64 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CD3DTexture@@IEAA@XZ @ 0x180084E44 (--0CD3DTexture@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateFromTexture(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        char a3,
        struct CD3DDeviceLevel1 *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DTexture *v9; // rax
  CD3DTexture *v10; // rbx
  int v11; // eax
  int v12; // edi

  *a5 = 0LL;
  v9 = (CD3DTexture *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        256LL);
  v10 = v9;
  if ( v9 )
  {
    CD3DTexture::CD3DTexture(v9);
    *((_QWORD *)v10 + 31) = 0LL;
    *((_QWORD *)v10 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v10 = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v11 = CD3DTexture::Init(v10, (struct CD3DDeviceLevel1 *)((char *)a4 + 896), a1, a2);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x11Du);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD8u);
    }
    else
    {
      if ( a3 )
        CD3DResource::SetAsEvictable(v10);
      *a5 = v10;
      v10 = 0LL;
    }
    if ( v10 )
      CMILPoolResource::Release(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD0u);
  }
  return (unsigned int)v12;
}
