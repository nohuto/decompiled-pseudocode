/*
 * XREFs of ??1CAnalogTextureTarget@@EEAA@XZ @ 0x18013BDA0
 * Callers:
 *     ??_ECAnalogTextureTarget@@EEAAPEAXI@Z @ 0x18013BE30 (--_ECAnalogTextureTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B2948 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?ReleaseResources@CAnalogTextureTarget@@AEAAXXZ @ 0x18013C4E4 (-ReleaseResources@CAnalogTextureTarget@@AEAAXXZ.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x18013CAF0 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 */

void __fastcall CAnalogTextureTarget::~CAnalogTextureTarget(CAnalogTextureTarget *this)
{
  struct CVisualTree *v1; // rdx
  CMILRefCountBase *v3; // rcx

  v1 = (struct CVisualTree *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &CAnalogTextureTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnalogTextureTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CAnalogTextureTarget::`vftable'{for `IVisualTreeClient'};
  if ( v1 )
    CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v1);
  CAnalogTextureTarget::SetVisualTree(this, 0LL);
  CAnalogTextureTarget::ReleaseResources(this);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    CMILRefCountBase::Release(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  FastRegion::CRegion::FreeMemory((void **)this + 26);
  CRenderTarget::~CRenderTarget(this);
}
