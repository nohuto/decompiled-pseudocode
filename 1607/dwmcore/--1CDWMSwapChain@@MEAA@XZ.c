/*
 * XREFs of ??1CDWMSwapChain@@MEAA@XZ @ 0x18007AB28
 * Callers:
 *     ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x18007AC00 (--_GCDWMSwapChain@@MEAAPEAXI@Z.c)
 *     ??1CDWMSwapChainDDA@@MEAA@XZ @ 0x18017CFCC (--1CDWMSwapChainDDA@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x18007A530 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800B4A18 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::~CDWMSwapChain(CDWMSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax
  __int64 v10; // rdx
  __int64 v11; // r8

  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 39);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 38);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (void *)*((_QWORD *)this + 43);
  if ( v7 )
    CloseHandle(v7);
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v8);
  DwmCoreAsimov::CDwmEventManager::SetFlipState(Manager, this, 3LL);
  CSwapChainBase::~CSwapChainBase(this, v10, v11);
}
