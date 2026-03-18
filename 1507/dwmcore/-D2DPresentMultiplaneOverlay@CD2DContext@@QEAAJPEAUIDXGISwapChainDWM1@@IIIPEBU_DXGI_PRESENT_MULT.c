/*
 * XREFs of ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180135660
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042840 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::D2DPresentMultiplaneOverlay(
        CD2DContext *this,
        struct IDXGISwapChainDWM1 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  if ( (a4 & 1) != 0 )
    return (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, _QWORD, const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(*(_QWORD *)a2 + 184LL))(
             a2,
             a3,
             a4,
             a5,
             a6);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *, unsigned int))(**((_QWORD **)this + 6) + 112LL))(
             *((_QWORD *)this + 6),
             a2,
             a3,
             a4,
             a6,
             a5);
}
