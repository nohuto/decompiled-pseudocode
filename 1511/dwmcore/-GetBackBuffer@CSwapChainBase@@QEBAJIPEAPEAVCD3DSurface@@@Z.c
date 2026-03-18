/*
 * XREFs of ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x180072D14
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800746B0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x18013E070 (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSwapChainBase::GetBackBuffer(CSwapChainBase *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // esi
  struct CD3DSurface *v6; // rdi

  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 296LL))(this) )
  {
    v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 32)
                                + 8LL
                                * (*(unsigned int (__fastcall **)(CSwapChainBase *, _QWORD))(*(_QWORD *)this + 312LL))(
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
