/*
 * XREFs of ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x18012D784
 * Callers:
 *     ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x18012D840 (--_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x1800BA5A4 (-RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180162C64 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        const struct _TlgProvider_t *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CVisualTree *v5; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  v3 = *((_QWORD *)this + 99);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 99) = 0LL;
  }
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 19) = 0LL;
  }
  v5 = (CVisualTree *)*((_QWORD *)this + 98);
  if ( v5 )
  {
    CVisualTree::RemoveTreeClient(v5, (CHwndRenderTargetRemoteApp *)((char *)this + 120));
    CMILRefCountBase::Release(*((CMILRefCountBase **)this + 98));
  }
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5, a2);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
