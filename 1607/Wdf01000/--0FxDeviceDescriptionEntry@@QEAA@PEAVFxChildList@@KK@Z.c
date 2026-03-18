/*
 * XREFs of ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C00371F0
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002267C (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C006D240 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

void __fastcall FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
        FxDeviceDescriptionEntry *this,
        FxChildList *DeviceList,
        unsigned int AddressDescriptionSize,
        unsigned int IdentificationDescriptionSize)
{
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v5; // rcx

  this->m_IdentificationDescription = (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)&this[1];
  LODWORD(this[1].m_DescriptionLink.Flink) = AddressDescriptionSize;
  if ( IdentificationDescriptionSize )
  {
    v5 = (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)((char *)this->m_IdentificationDescription
                                                 + ((AddressDescriptionSize + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
    this->m_AddressDescription = v5;
    v5->AddressDescriptionSize = IdentificationDescriptionSize;
  }
  this->m_DescriptionLink.Blink = (_LIST_ENTRY *)this;
  this->m_DescriptionLink.Flink = (_LIST_ENTRY *)this;
  this->m_ModificationLink.Blink = &this->m_ModificationLink;
  this->m_ModificationLink.Flink = &this->m_ModificationLink;
  *(_WORD *)&this->m_FoundInLastScan = 0;
  this->m_PendingDeleteOnScanEnd = 0;
  this->m_ModificationState = ModificationInsert;
  this->m_DeviceList = DeviceList;
  FxObject::AddRef(DeviceList, this, 72, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
}
