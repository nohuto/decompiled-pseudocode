/*
 * XREFs of ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180167E50
 * Callers:
 *     ?Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180167D20 (-Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4F.c)
 *     ?Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z @ 0x180167DE0 (-Resize@CAnalogDisplayRenderTarget@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18007A0C4 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBase@@@Z @ 0x180167BCC (-CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBa.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::UpdateFlippingChain(CAnalogDisplayRenderTarget *this, int a2, int a3)
{
  int v4; // edi
  __int64 v5; // rcx
  CMILPoolResource *v8; // rcx
  CSwapChainBase **v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // r8d
  int SwapChain; // eax
  __int64 v13; // rdx
  CSwapChainBase *v14; // rcx
  int BackBuffer; // eax

  v4 = 0;
  v5 = *((_QWORD *)this + 42);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 42) = 0LL;
  }
  v8 = (CMILPoolResource *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    CMILPoolResource::Release(v8);
    *((_QWORD *)this + 21) = 0LL;
  }
  v9 = (CSwapChainBase **)((char *)this + 216);
  v10 = *((_QWORD *)this + 27);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *v9 = 0LL;
  }
  if ( a2 && a3 )
  {
    v11 = *((_DWORD *)this + 88);
    *((_DWORD *)this + 56) = a2;
    *((_DWORD *)this + 57) = a3;
    SwapChain = CAnalogDisplayRenderTarget::CreateSwapChain(
                  this,
                  (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 224),
                  v11,
                  (struct CSwapChainBase **)this + 27);
    v4 = SwapChain;
    if ( SwapChain < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0x15Fu);
    }
    else
    {
      v14 = *v9;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 22) = 0;
      *((_DWORD *)this + 23) = a2;
      *((_DWORD *)this + 24) = a3;
      *((_DWORD *)this + 2) = a2;
      *((_DWORD *)this + 3) = a3;
      BackBuffer = CSwapChainBase::GetBackBuffer(v14, v13, (struct CD3DSurface **)this + 21);
      v4 = BackBuffer;
      if ( BackBuffer < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x16Cu);
      else
        (*(void (__fastcall **)(CAnalogDisplayRenderTarget *))(*(_QWORD *)this + 256LL))(this);
    }
    if ( v4 >= 0 )
    {
      *((_BYTE *)this + 192) = 1;
    }
    else
    {
      if ( v4 == -2003304442 || v4 == -2003304307 )
        *((_DWORD *)this + 77) = v4;
      *((_BYTE *)this + 192) = 0;
    }
  }
  else
  {
    *((_BYTE *)this + 192) = 0;
  }
  return (unsigned int)v4;
}
