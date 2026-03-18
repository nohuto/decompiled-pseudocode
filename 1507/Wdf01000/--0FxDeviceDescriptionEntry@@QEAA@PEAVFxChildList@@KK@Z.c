/*
 * XREFs of ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C002E6D0
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001DE94 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C0066C90 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
        FxDeviceDescriptionEntry *this,
        FxChildList *DeviceList,
        unsigned int AddressDescriptionSize,
        unsigned int IdentificationDescriptionSize)
{
  unsigned int RefCount; // r8d
  FxTagTracker *v6; // rcx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v7; // rcx

  this->m_IdentificationDescription = (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)&this[1];
  LODWORD(this[1].m_DescriptionLink.Flink) = AddressDescriptionSize;
  if ( IdentificationDescriptionSize )
  {
    v7 = (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)((char *)this->m_IdentificationDescription
                                                 + ((AddressDescriptionSize + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
    this->m_AddressDescription = v7;
    v7->AddressDescriptionSize = IdentificationDescriptionSize;
  }
  this->m_DescriptionLink.Blink = (_LIST_ENTRY *)this;
  this->m_DescriptionLink.Flink = (_LIST_ENTRY *)this;
  this->m_ModificationLink.Blink = &this->m_ModificationLink;
  this->m_ModificationLink.Flink = &this->m_ModificationLink;
  this->m_ModificationState = ModificationInsert;
  this->m_DeviceList = DeviceList;
  *(_WORD *)&this->m_FoundInLastScan = 0;
  this->m_PendingDeleteOnScanEnd = 0;
  RefCount = _InterlockedIncrement(&DeviceList->m_Refcnt);
  if ( SLOBYTE(DeviceList->m_ObjectFlags) < 0 )
    v6 = *(FxTagTracker **)&DeviceList[-1].m_ScanEvent.m_Event.Header.Lock;
  else
    v6 = 0LL;
  if ( v6 )
    FxTagTracker::UpdateTagHistory(
      v6,
      this,
      72,
      "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp",
      TagAddRef,
      RefCount);
}
