/*
 * XREFs of ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18012DC5C
 * Callers:
 *     ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x18012DCE0 (--_ECHwndRenderTargetDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180034CC8 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180162C64 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::~CHwndRenderTargetDDA(
        CHwndRenderTargetDDA *this,
        const struct _TlgProvider_t *a2)
{
  CDisplay *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  v3 = (CDisplay *)*((_QWORD *)this + 19);
  if ( v3 )
    CDisplay::ReleaseDDAHwRenderTarget(v3);
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 19) = 0LL;
  }
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v4, a2);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
