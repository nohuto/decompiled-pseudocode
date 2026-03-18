/*
 * XREFs of ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x18012D730
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800772E8 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180075B68 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x18016380C (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

CHwndRenderTargetRemoteApp *__fastcall CHwndRenderTargetRemoteApp::CHwndRenderTargetRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        struct CComposition *a2)
{
  const struct _TlgProvider_t *v3; // rdx
  const struct _TlgProvider_t *v4; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  CHwndRenderTarget::CHwndRenderTarget(this, a2);
  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v4, v3);
  DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, this, 4LL);
  return this;
}
