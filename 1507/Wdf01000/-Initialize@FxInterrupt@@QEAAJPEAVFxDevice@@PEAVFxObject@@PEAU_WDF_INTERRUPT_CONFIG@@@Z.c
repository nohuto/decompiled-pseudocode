/*
 * XREFs of ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029C88
 * Callers:
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0029810 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C002A050 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxInterrupt::Initialize(
        FxInterrupt *this,
        FxDevice *Device,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  unsigned int RefCount; // edx
  FxDefaultIrpHandler *m_PkgDefault; // rcx
  FxPkgPnp *m_PkgPnp; // rdi
  unsigned int v11; // edx
  FxTagTracker *m_InterruptCaptured; // rcx
  __int64 result; // rax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_PnpList; // rax

  RefCount = _InterlockedIncrement(&Device->m_Refcnt);
  if ( SLOBYTE(Device->m_ObjectFlags) < 0 )
    m_PkgDefault = Device[-1].m_PkgDefault;
  else
    m_PkgDefault = 0LL;
  if ( m_PkgDefault )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_PkgDefault,
      this,
      507,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp",
      TagAddRef,
      RefCount);
  this->m_DeviceBase = Device;
  m_PkgPnp = Device->m_PkgPnp;
  v11 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_InterruptCaptured = (FxTagTracker *)this[-1].m_InterruptCaptured;
  else
    m_InterruptCaptured = 0LL;
  if ( m_InterruptCaptured )
    FxTagTracker::UpdateTagHistory(
      m_InterruptCaptured,
      FxInterrupt::_InterruptThunk,
      524,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp",
      TagAddRef,
      v11);
  this->m_ShareVector = Configuration->ShareVector;
  this->m_FloatingSave = Configuration->FloatingSave;
  this->m_EvtInterruptEnable = Configuration->EvtInterruptEnable;
  this->m_EvtInterruptDisable = Configuration->EvtInterruptDisable;
  result = FxInterrupt::InitializeWorker(this, Parent, Configuration);
  if ( (int)result >= 0 )
  {
    this->m_InterruptInfo.MessageNumber = m_PkgPnp->m_InterruptObjectCount;
    if ( Configuration->InterruptRaw )
    {
      this->m_CreatedInPrepareHardware = 1;
      FxInterrupt::AssignResources(this, Configuration->InterruptRaw - 1, Configuration->InterruptTranslated - 1);
    }
    ++m_PkgPnp->m_InterruptObjectCount;
    Blink = m_PkgPnp->m_InterruptListHead.Blink;
    p_m_PnpList = &this->m_PnpList;
    this->m_PnpList.Flink = &m_PkgPnp->m_InterruptListHead;
    this->m_PnpList.Blink = Blink;
    if ( Blink->Flink != &m_PkgPnp->m_InterruptListHead )
      __fastfail(3u);
    Blink->Flink = p_m_PnpList;
    m_PkgPnp->m_InterruptListHead.Blink = p_m_PnpList;
    result = 0LL;
    this->m_AddedToList = 1;
  }
  return result;
}
