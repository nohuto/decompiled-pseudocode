/*
 * XREFs of ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180114244
 * Callers:
 *     ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x180114310 (--_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180076B7C (-RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180139318 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        const struct _TlgProvider_t *a2)
{
  __int64 v2; // rsi
  CMILRefCountBase *v4; // rcx
  CVisualTree *v5; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  v2 = *((_QWORD *)this + 75);
  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 75) = 0LL;
  }
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  v5 = (CVisualTree *)*((_QWORD *)this + 74);
  if ( v5 )
  {
    CVisualTree::RemoveTreeClient(v5, (CHwndRenderTargetRemoteApp *)((char *)this + 48));
    CMILRefCountBase::Release(*((CMILRefCountBase **)this + 74));
  }
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5, a2);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
