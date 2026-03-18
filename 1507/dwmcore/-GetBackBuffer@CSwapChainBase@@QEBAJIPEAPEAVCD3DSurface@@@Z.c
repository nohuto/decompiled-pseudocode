/*
 * XREFs of ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18008EE64
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E790 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180127F8C (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSwapChainBase::GetBackBuffer(CSwapChainBase *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // esi
  struct CD3DSurface *v6; // rdi

  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 280LL))(this) )
  {
    v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 32)
                                + 8LL
                                * (*(unsigned int (__fastcall **)(CSwapChainBase *, _QWORD))(*(_QWORD *)this + 296LL))(
                                    this,
                                    0LL));
    *a3 = v6;
    (**(void (__fastcall ***)(struct CD3DSurface *))v6)(v6);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x150u);
  }
  return v5;
}
