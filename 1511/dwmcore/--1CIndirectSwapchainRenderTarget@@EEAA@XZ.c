/*
 * XREFs of ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180108BFC
 * Callers:
 *     ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x180108C60 (--_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(CIndirectSwapchainRenderTarget *this)
{
  *(_QWORD *)this = &CIndirectSwapchainRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable';
  CIndirectSwapchainRenderTarget::Unregister(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 45);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 41);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
