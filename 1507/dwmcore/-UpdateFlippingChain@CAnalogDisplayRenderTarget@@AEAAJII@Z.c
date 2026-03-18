/*
 * XREFs of ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180127F8C
 * Callers:
 *     ?Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180127E80 (-Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4F.c)
 *     ?Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z @ 0x180127F00 (-Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18008EE64 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBase@@@Z @ 0x180127D04 (-CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBa.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::UpdateFlippingChain(CAnalogDisplayRenderTarget *this, int a2, int a3)
{
  struct CD3DSurface **v3; // r13
  CMILPoolResource *v5; // rcx
  int v6; // esi
  CSwapChainBase **v9; // r14
  __int64 v10; // r12
  unsigned int v11; // r8d
  int SwapChain; // eax
  __int64 v13; // rdx
  CSwapChainBase *v14; // rcx
  int BackBuffer; // eax

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
    v11 = *((_DWORD *)this + 84);
    *((_DWORD *)this + 54) = a2;
    *((_DWORD *)this + 55) = a3;
    SwapChain = CAnalogDisplayRenderTarget::CreateSwapChain(
                  this,
                  (struct DXGI_SWAP_CHAIN_DESC *)this + 3,
                  v11,
                  (struct CSwapChainBase **)this + 26);
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
      BackBuffer = CSwapChainBase::GetBackBuffer(v14, v13, v3);
      v6 = BackBuffer;
      if ( BackBuffer >= 0 )
        (*(void (__fastcall **)(CAnalogDisplayRenderTarget *))(*(_QWORD *)this + 240LL))(this);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x15Au);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0x14Du);
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
