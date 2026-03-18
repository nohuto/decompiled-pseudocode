/*
 * XREFs of ??1CAnalogTextureTarget@@EEAA@XZ @ 0x180165F38
 * Callers:
 *     ??_ECAnalogTextureTarget@@EEAAPEAXI@Z @ 0x180165FD0 (--_ECAnalogTextureTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B6578 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@CAnalogTextureTarget@@AEAAXXZ @ 0x180166560 (-ReleaseResources@CAnalogTextureTarget@@AEAAXXZ.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x180166B60 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 */

void __fastcall CAnalogTextureTarget::~CAnalogTextureTarget(CAnalogTextureTarget *this)
{
  struct CVisualTree *v1; // rdx
  __int64 v3; // rcx

  v1 = (struct CVisualTree *)*((_QWORD *)this + 16);
  *(_QWORD *)this = &CAnalogTextureTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnalogTextureTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CAnalogTextureTarget::`vftable'{for `IVisualTreeClient'};
  if ( v1 )
    CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v1);
  CAnalogTextureTarget::SetVisualTree(this, 0LL);
  CAnalogTextureTarget::ReleaseResources(this);
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 19) = 0LL;
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 36);
  CRenderTarget::~CRenderTarget(this);
}
