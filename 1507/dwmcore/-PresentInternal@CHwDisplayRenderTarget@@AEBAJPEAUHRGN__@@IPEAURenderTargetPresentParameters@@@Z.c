/*
 * XREFs of ?PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z @ 0x1800DCF1C
 * Callers:
 *     ?PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x180139410 (-PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURenderTargetPresentParameters@@@Z @ 0x1800DD7BC (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURende.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::PresentInternal(
        CHwDisplayRenderTarget *this,
        HRGN a2,
        unsigned int a3,
        struct RenderTargetPresentParameters *a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CD3DDeviceLevel1::PresentSwapChain(
         *((CD3DDeviceLevel1 **)this + 20),
         *((struct CSwapChainBase **)this + 26),
         *((HWND *)this + 38),
         a2,
         a3,
         *((_DWORD *)this + 74),
         a4);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x6DDu);
  return v5;
}
