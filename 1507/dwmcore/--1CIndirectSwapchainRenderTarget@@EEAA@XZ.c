/*
 * XREFs of ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1800EDE84
 * Callers:
 *     ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x1800EDEF0 (--_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EECB0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(CIndirectSwapchainRenderTarget *this)
{
  *(_QWORD *)this = &CIndirectSwapchainRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable';
  CIndirectSwapchainRenderTarget::Unregister(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 48);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 44);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
