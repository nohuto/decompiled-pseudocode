/*
 * XREFs of ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x1801146E0
 * Callers:
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180106CE0 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 * Callees:
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007E82C (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180139CA4 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::CHwndRenderTargetDDA(
        CHwndRenderTargetDDA *this,
        struct CComposition *a2)
{
  const struct _TlgProvider_t *v3; // rdx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  CHwndRenderTarget::CHwndRenderTarget(this, a2);
  *((_QWORD *)this + 5) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CResource'};
  *((_QWORD *)this + 6) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(
              (const struct _TlgProvider_t *)&CHwndRenderTargetDDA::`vftable'{for `CResource'},
              v3);
  DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, this, 5LL);
  return this;
}
