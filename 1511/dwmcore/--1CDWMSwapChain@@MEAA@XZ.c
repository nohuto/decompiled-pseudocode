/*
 * XREFs of ??1CDWMSwapChain@@MEAA@XZ @ 0x180073A58
 * Callers:
 *     ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x180073B50 (--_GCDWMSwapChain@@MEAAPEAXI@Z.c)
 *     ??1CDWMSwapChainDDA@@MEAA@XZ @ 0x18014C3EC (--1CDWMSwapChainDDA@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800697A0 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x180073210 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CDWMSwapChain::~CDWMSwapChain(CDWMSwapChain *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  void *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax

  v1 = *((_QWORD *)this + 39);
  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 38);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 38));
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 36));
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 37));
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 44));
  v7 = (void *)*((_QWORD *)this + 43);
  if ( v7 )
    CloseHandle(v7);
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v8);
  DwmCoreAsimov::CDwmEventManager::SetFlipState((__int64)Manager, (__int64)this, 3u);
  CSwapChainBase::~CSwapChainBase(this);
}
