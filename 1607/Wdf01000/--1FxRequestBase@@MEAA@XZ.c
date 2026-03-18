/*
 * XREFs of ??1FxRequestBase@@MEAA@XZ @ 0x1C0063208
 * Callers:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0063064 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C00784C0 (--_EFxRequestFromLookaside@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::~FxRequestBase(FxRequestBase *this, unsigned int a2, unsigned int a3)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestContext *v7; // rcx
  FxRequestTimer *m_Timer; // rcx

  this->__vftable = (FxRequestBase_vtbl *)&FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    v7 = this->m_RequestContext;
    if ( v7 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v7->~FxRequestContext)(v7, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
