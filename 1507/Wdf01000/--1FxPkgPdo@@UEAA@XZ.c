/*
 * XREFs of ??1FxPkgPdo@@UEAA@XZ @ 0x1C009907C
 * Callers:
 *     ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x1C0099110 (--_EFxPkgPdo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0075C2C (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C009914C (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPkgPdo::~FxPkgPdo(FxPkgPdo *this)
{
  unsigned int v2; // edx
  wchar_t *m_IDsAllocation; // rcx
  FxChildList *m_OwningChildList; // rcx
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx

  this->__vftable = (FxPkgPdo_vtbl *)&FxPkgPdo::`vftable';
  FxDeviceText::_CleanupList(&this->m_DeviceTextHead);
  m_IDsAllocation = this->m_IDsAllocation;
  if ( m_IDsAllocation )
  {
    FxPoolFree(m_IDsAllocation);
    this->m_IDsAllocation = 0LL;
  }
  m_OwningChildList = this->m_OwningChildList;
  if ( m_OwningChildList )
    m_OwningChildList->Release(
      m_OwningChildList,
      this,
      173,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
  m_EjectionDeviceList = this->m_EjectionDeviceList;
  if ( m_EjectionDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_EjectionDeviceList, v2);
    this->m_EjectionDeviceList = 0LL;
  }
  FxPkgPnp::~FxPkgPnp(this);
}
