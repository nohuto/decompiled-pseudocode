/*
 * XREFs of ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C005F908
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0027090 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C005F5C0 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0036900 (memmove.c)
 */

__int64 __fastcall FxChildList::DuplicateAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  int (__fastcall *m_EvtAddressDescriptionDuplicate)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // r10
  unsigned __int64 v4; // rcx

  m_EvtAddressDescriptionDuplicate = this->m_EvtAddressDescriptionDuplicate;
  if ( m_EvtAddressDescriptionDuplicate )
  {
    if ( this->m_ObjectSize )
      v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v4 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))m_EvtAddressDescriptionDuplicate)(
             v4,
             Source,
             Dest);
  }
  else
  {
    memmove(Dest, Source, this->m_AddressDescriptionSize);
    return 0LL;
  }
}
