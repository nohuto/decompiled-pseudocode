/*
 * XREFs of ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x180166E60
 * Callers:
 *     ??_ECAnalogCompositorTarget@@EEAAPEAXI@Z @ 0x180166ED0 (--_ECAnalogCompositorTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogCompositorTarget@@UEAAXXZ @ 0x180167220 (-ReleaseResourcesForDisplayChange@CAnalogCompositorTarget@@UEAAXXZ.c)
 */

void __fastcall CAnalogCompositorTarget::~CAnalogCompositorTarget(CAnalogCompositorTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CAnalogCompositorTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnalogCompositorTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CAnalogCompositorTarget::`vftable'{for `IVisualTreeClient'};
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    CMILPoolResource::Release((CMILPoolResource *)(v2 + 408));
    *((_QWORD *)this + 21) = 0LL;
  }
  CAnalogCompositorTarget::ReleaseResourcesForDisplayChange((CAnalogCompositorTarget *)((char *)this + 112));
  CRenderTarget::~CRenderTarget(this);
}
