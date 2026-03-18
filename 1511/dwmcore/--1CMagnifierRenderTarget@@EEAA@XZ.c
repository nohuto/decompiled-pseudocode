/*
 * XREFs of ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180107858
 * Callers:
 *     ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x180107930 (--_GCMagnifierRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierRenderTarget::~CMagnifierRenderTarget(CMagnifierRenderTarget *this)
{
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CMagnifierRenderTarget::`vftable';
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
