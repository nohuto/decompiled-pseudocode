/*
 * XREFs of ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34
 * Callers:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800367F8 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800740C4 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x1800745A0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074700 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18007AB28 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x18012D730 (--0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x18012D784 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x18012DC08 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18012DC5C (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 * Callees:
 *     ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800B4B28 (--0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800BD4C0 (atexit.c)
 */

DwmCoreAsimov::CDwmEventManager_Private **__fastcall DwmCoreAsimov::CDwmEventManager::GetManager(
        const struct _TlgProvider_t *a1,
        const struct _TlgProvider_t *a2)
{
  if ( (dword_1801F0288 & 1) == 0 )
  {
    dword_1801F0288 |= 1u;
    DwmCoreAsimov::CDwmEventManager::CDwmEventManager(a1, a2);
    atexit(DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__);
  }
  return &qword_1801F0290;
}
