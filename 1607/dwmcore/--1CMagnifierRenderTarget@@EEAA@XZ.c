/*
 * XREFs of ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18011E438
 * Callers:
 *     ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x18011E520 (--_GCMagnifierRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierRenderTarget::~CMagnifierRenderTarget(CMagnifierRenderTarget *this)
{
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CMagnifierRenderTarget::`vftable';
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
