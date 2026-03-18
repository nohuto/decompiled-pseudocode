/*
 * XREFs of ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014092C
 * Callers:
 *     ?Init@CHwHwndRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180140820 (-Init@CHwHwndRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnu.c)
 *     ?Resize@CHwHwndRenderTarget@@UEAAJII@Z @ 0x1801408A0 (-Resize@CHwHwndRenderTarget@@UEAAJII@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x180081824 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18008F758 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800DE018 (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CHwHwndRenderTarget::UpdateFlippingChain(CHwHwndRenderTarget *this, int a2, int a3)
{
  struct CD3DSurface **v3; // r13
  CMILPoolResource *v5; // rcx
  int v6; // esi
  CSwapChainBase **v9; // r14
  __int64 v10; // r12
  int v11; // r8d
  CD3DDeviceLevel1 *v12; // rcx
  int SwapChain; // eax
  CSwapChainBase *v14; // rcx
  int FrontBuffer; // eax

  v3 = (struct CD3DSurface **)((char *)this + 168);
  v5 = (CMILPoolResource *)*((_QWORD *)this + 21);
  v6 = 0;
  if ( v5 )
  {
    CMILPoolResource::Release(v5);
    *v3 = 0LL;
  }
  v9 = (CSwapChainBase **)((char *)this + 208);
  v10 = *((_QWORD *)this + 26);
  if ( v10 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)this + 26));
    *v9 = 0LL;
  }
  if ( a2 && a3 )
  {
    v11 = *((_DWORD *)this + 78);
    v12 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 20);
    *((_DWORD *)this + 54) = a2;
    *((_DWORD *)this + 55) = a3;
    SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                  v12,
                  (struct DXGI_SWAP_CHAIN_DESC *)this + 3,
                  v11,
                  0LL,
                  (struct CDWMOffScreenSwapChain **)this + 26);
    v6 = SwapChain;
    if ( SwapChain >= 0 )
    {
      v14 = *v9;
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 22) = a2;
      *((_DWORD *)this + 23) = a3;
      *((_DWORD *)this + 2) = a2;
      *((_DWORD *)this + 3) = a3;
      FrontBuffer = CSwapChainBase::GetFrontBuffer(v14, v3);
      v6 = FrontBuffer;
      if ( FrontBuffer >= 0 )
      {
        CHwSurfaceRenderTarget::UpdatePixelFormatInfo(this, (CHwHwndRenderTarget *)((char *)this + 176));
        (*(void (__fastcall **)(CHwHwndRenderTarget *))(*(_QWORD *)this + 240LL))(this);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, FrontBuffer, 0xDAu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0xCDu);
    }
    if ( v6 >= 0 )
    {
      *((_BYTE *)this + 184) = 1;
    }
    else
    {
      if ( v6 == -2003304442 || v6 == -2003304307 )
        *((_DWORD *)this + 75) = v6;
      *((_BYTE *)this + 184) = 0;
    }
  }
  else
  {
    *((_BYTE *)this + 184) = 0;
  }
  return (unsigned int)v6;
}
