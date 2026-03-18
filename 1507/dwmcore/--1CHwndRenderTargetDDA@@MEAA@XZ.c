/*
 * XREFs of ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1800FA7C4
 * Callers:
 *     ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x1800FA840 (--_ECHwndRenderTargetDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180058374 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180123D64 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::~CHwndRenderTargetDDA(
        CHwndRenderTargetDDA *this,
        const struct _TlgProvider_t *a2)
{
  CDisplay *v3; // rcx
  CMILRefCountBase *v4; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  v3 = (CDisplay *)*((_QWORD *)this + 10);
  if ( v3 )
    CDisplay::ReleaseDDAHwRenderTarget(v3);
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v4, a2);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
