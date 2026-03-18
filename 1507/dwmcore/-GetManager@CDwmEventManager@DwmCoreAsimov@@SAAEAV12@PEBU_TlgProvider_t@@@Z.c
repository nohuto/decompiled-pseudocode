/*
 * XREFs of ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042840 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004ABD8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18004B0F0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18004B220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18008BE04 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800962A4 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x1800FA2D4 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x1800FA770 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1800FA7C4 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 * Callees:
 *     ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180096B84 (--0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180097CE8 (atexit.c)
 */

DwmCoreAsimov::CDwmEventManager_Private **__fastcall DwmCoreAsimov::CDwmEventManager::GetManager(
        const struct _TlgProvider_t *a1,
        const struct _TlgProvider_t *a2)
{
  if ( (dword_180193150 & 1) == 0 )
  {
    dword_180193150 |= 1u;
    DwmCoreAsimov::CDwmEventManager::CDwmEventManager(a1, a2);
    atexit(DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__);
  }
  return &qword_180195EF0;
}
