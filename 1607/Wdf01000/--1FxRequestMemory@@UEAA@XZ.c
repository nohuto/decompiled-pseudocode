/*
 * XREFs of ??1FxRequestMemory@@UEAA@XZ @ 0x1C007B2FC
 * Callers:
 *     ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C007B390 (--_EFxRequestMemory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C00786C4 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestMemory::~FxRequestMemory(FxRequestMemory *this, unsigned int a2, unsigned int a3)
{
  _MDL *m_Mdl; // rcx
  FxRequest *m_Request; // rcx

  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxRequestMemory_vtbl *)&FxRequestMemory::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxRequestMemory::`vftable'{for `IFxMemory'};
  m_Mdl = this->m_Mdl;
  if ( m_Mdl )
  {
    MmUnlockPages(m_Mdl);
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, this->m_Mdl);
    else
      IoFreeMdl(this->m_Mdl);
    this->m_Mdl = 0LL;
  }
  m_Request = this->m_Request;
  if ( m_Request )
  {
    FxRequest::ReleaseIrpReference(m_Request);
    this->m_Request = 0LL;
  }
  FxMemoryBufferPreallocated::~FxMemoryBufferPreallocated(this, a2, a3);
}
