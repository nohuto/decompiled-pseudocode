/*
 * XREFs of ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C005F844
 * Callers:
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0026F44 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0027090 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C005F95C (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 *     ?GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C005F9F0 (-GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_A.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C005FA5C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C0060300 (-UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHIL.c)
 * Callees:
 *     memmove @ 0x1C0036900 (memmove.c)
 */

void __fastcall FxChildList::CopyAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  void (__fastcall *m_EvtAddressDescriptionCopy)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // r9
  unsigned __int64 v4; // rcx

  if ( Source )
  {
    m_EvtAddressDescriptionCopy = this->m_EvtAddressDescriptionCopy;
    if ( m_EvtAddressDescriptionCopy )
    {
      if ( this->m_ObjectSize )
        v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v4 = 0LL;
      m_EvtAddressDescriptionCopy((WDFCHILDLIST__ *)v4, Source, Dest);
    }
    else
    {
      memmove(Dest, Source, this->m_AddressDescriptionSize);
    }
  }
}
