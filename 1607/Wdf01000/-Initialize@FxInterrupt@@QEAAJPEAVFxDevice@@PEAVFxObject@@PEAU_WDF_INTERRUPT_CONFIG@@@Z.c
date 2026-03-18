/*
 * XREFs of ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0015348
 * Callers:
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0014EC8 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00151E8 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0015700 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

int __fastcall FxInterrupt::Initialize(
        FxInterrupt *this,
        FxDevice *Device,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  FxPkgPnp *m_PkgPnp; // rbx
  int result; // eax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_PnpList; // rax

  FxObject::AddRef(Device, this, 507, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  this->m_DeviceBase = Device;
  m_PkgPnp = Device->m_PkgPnp;
  FxObject::AddRef(
    this,
    FxInterrupt::_InterruptThunk,
    524,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  this->m_ShareVector = Configuration->ShareVector;
  this->m_FloatingSave = Configuration->FloatingSave;
  this->m_EvtInterruptEnable = Configuration->EvtInterruptEnable;
  this->m_EvtInterruptDisable = Configuration->EvtInterruptDisable;
  result = FxInterrupt::InitializeWorker(this, Parent, Configuration);
  if ( result >= 0 )
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
    if ( Blink->Flink != &m_PkgPnp->m_InterruptListHead )
      __fastfail(3u);
    p_m_PnpList->Flink = &m_PkgPnp->m_InterruptListHead;
    this->m_PnpList.Blink = Blink;
    Blink->Flink = p_m_PnpList;
    m_PkgPnp->m_InterruptListHead.Blink = p_m_PnpList;
    result = 0;
    this->m_AddedToList = 1;
  }
  return result;
}
