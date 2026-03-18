/*
 * XREFs of ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x18013CD6C
 * Callers:
 *     ??_ECAnalogCompositorTarget@@EEAAPEAXI@Z @ 0x18013CDE0 (--_ECAnalogCompositorTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogCompositorTarget@@UEAAXXZ @ 0x18013D270 (-ReleaseResourcesForDisplayChange@CAnalogCompositorTarget@@UEAAXXZ.c)
 */

void __fastcall CAnalogCompositorTarget::~CAnalogCompositorTarget(CAnalogCompositorTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CAnalogCompositorTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnalogCompositorTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    CMILPoolResource::Release((CMILPoolResource *)(v2 + 384));
    *((_QWORD *)this + 12) = 0LL;
  }
  CAnalogCompositorTarget::ReleaseResourcesForDisplayChange((CAnalogCompositorTarget *)((char *)this + 40));
  CRenderTarget::~CRenderTarget(this);
}
