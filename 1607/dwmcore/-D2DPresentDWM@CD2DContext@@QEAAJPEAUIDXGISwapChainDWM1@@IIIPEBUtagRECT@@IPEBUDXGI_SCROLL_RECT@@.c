/*
 * XREFs of ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18010F29C
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18017D200 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::D2DPresentDWM(
        CD2DContext *this,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
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
             (unsigned int)a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, __int64, _QWORD, const struct tagRECT *, unsigned int, const struct DXGI_SCROLL_RECT *, unsigned int, struct IDXGIResource *, unsigned int))(**((_QWORD **)this + 6) + 104LL))(
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
