/*
 * XREFs of ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x18013E070
 * Callers:
 *     ?Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18013DEB0 (-Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4F.c)
 *     ?Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z @ 0x18013DF90 (-Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x180072D14 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBase@@@Z @ 0x18013DD08 (-CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBa.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::UpdateFlippingChain(CAnalogDisplayRenderTarget *this, int a2, int a3)
{
  __int64 v3; // r14
  int v4; // esi
  CMILPoolResource *v8; // rcx
  CSwapChainBase **v9; // r14
  __int64 v10; // r13
  unsigned int v11; // r8d
  int SwapChain; // eax
  __int64 v13; // rdx
  CSwapChainBase *v14; // rcx
  int BackBuffer; // eax

  v3 = *((_QWORD *)this + 41);
  v4 = 0;
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 41));
    *((_QWORD *)this + 41) = 0LL;
  }
  v8 = (CMILPoolResource *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    CMILPoolResource::Release(v8);
    *((_QWORD *)this + 21) = 0LL;
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
    v11 = *((_DWORD *)this + 86);
    *((_DWORD *)this + 54) = a2;
    *((_DWORD *)this + 55) = a3;
    SwapChain = CAnalogDisplayRenderTarget::CreateSwapChain(
                  this,
                  (struct DXGI_SWAP_CHAIN_DESC *)this + 3,
                  v11,
                  (struct CSwapChainBase **)this + 26);
    v4 = SwapChain;
    if ( SwapChain >= 0 )
    {
      v14 = *v9;
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 22) = a2;
      *((_DWORD *)this + 23) = a3;
      *((_DWORD *)this + 2) = a2;
      *((_DWORD *)this + 3) = a3;
      BackBuffer = CSwapChainBase::GetBackBuffer(v14, v13, (struct CD3DSurface **)this + 21);
      v4 = BackBuffer;
      if ( BackBuffer >= 0 )
        (*(void (__fastcall **)(CAnalogDisplayRenderTarget *))(*(_QWORD *)this + 240LL))(this);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x174u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0x167u);
    }
    if ( v4 >= 0 )
    {
      *((_BYTE *)this + 184) = 1;
    }
    else
    {
      if ( v4 == -2003304442 || v4 == -2003304307 )
        *((_DWORD *)this + 75) = v4;
      *((_BYTE *)this + 184) = 0;
    }
  }
  else
  {
    *((_BYTE *)this + 184) = 0;
  }
  return (unsigned int)v4;
}
