/*
 * XREFs of ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x1800FA2D4
 * Callers:
 *     ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x1800FA3A0 (--_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180041168 (-RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180123D64 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        const struct _TlgProvider_t *a2)
{
  __int64 v2; // rsi
  CMILRefCountBase *v4; // rcx
  CVisualTree *v5; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  v2 = *((_QWORD *)this + 76);
  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 76) = 0LL;
  }
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  v5 = (CVisualTree *)*((_QWORD *)this + 75);
  if ( v5 )
  {
    CVisualTree::RemoveTreeClient(v5, (CHwndRenderTargetRemoteApp *)((char *)this + 48));
    CMILRefCountBase::Release(*((CMILRefCountBase **)this + 75));
  }
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5, a2);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
