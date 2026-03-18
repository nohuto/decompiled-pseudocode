/*
 * XREFs of ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x18012DC08
 * Callers:
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x18011D1A8 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 * Callees:
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180075B68 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x18016380C (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::CHwndRenderTargetDDA(
        CHwndRenderTargetDDA *this,
        struct CComposition *a2)
{
  const struct _TlgProvider_t *v3; // rdx
  const struct _TlgProvider_t *v4; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  CHwndRenderTarget::CHwndRenderTarget(this, a2);
  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v4, v3);
  DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, this, 5LL);
  return this;
}
