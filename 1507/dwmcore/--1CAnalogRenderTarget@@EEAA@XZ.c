/*
 * XREFs of ??1CAnalogRenderTarget@@EEAA@XZ @ 0x180126088
 * Callers:
 *     ??_GCAnalogRenderTarget@@EEAAPEAXI@Z @ 0x180126120 (--_GCAnalogRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180060A08 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?ReleaseResources@CAnalogRenderTarget@@AEAAXXZ @ 0x180126E1C (-ReleaseResources@CAnalogRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CAnalogRenderTarget::~CAnalogRenderTarget(CAnalogRenderTarget *this)
{
  struct CVisualTree *v1; // rdx
  void *v3; // rcx
  CMILRefCountBase *v4; // rcx

  v1 = (struct CVisualTree *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &CAnalogRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnalogRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CAnalogRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CAnalogRenderTarget::`vftable';
  if ( v1 )
  {
    CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v1);
    *(_BYTE *)(*((_QWORD *)this + 7) + 32LL) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 29);
  if ( v3 )
    CloseHandle(v3);
  CAnalogRenderTarget::ReleaseResources(this);
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  CRenderTarget::~CRenderTarget(this);
}
