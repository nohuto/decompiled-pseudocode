/*
 * XREFs of ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18000FEB8
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18014C660 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CD2DContext::D2DPresentDWM(
        CD2DContext *this,
        struct IDXGISwapChainDWM1 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagRECT *a6,
        unsigned int a7,
        const struct DXGI_SCROLL_RECT *a8,
        struct IDXGIResource *a9,
        unsigned int a10)
{
  if ( (a4 & 1) != 0 )
    return (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, _QWORD, const struct tagRECT *, unsigned int, const struct DXGI_SCROLL_RECT *, struct IDXGIResource *, unsigned int))(*(_QWORD *)a2 + 128LL))(
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, const struct tagRECT *, unsigned int, const struct DXGI_SCROLL_RECT *, unsigned int, struct IDXGIResource *, unsigned int))(**((_QWORD **)this + 6) + 104LL))(
             *((_QWORD *)this + 6),
             a2,
             a3,
             a4,
             a6,
             a5,
             a8,
             a7,
             a9,
             a10);
}
