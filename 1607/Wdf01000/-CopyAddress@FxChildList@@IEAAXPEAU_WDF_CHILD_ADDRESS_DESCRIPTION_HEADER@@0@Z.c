/*
 * XREFs of ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C006D4C4
 * Callers:
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C00224EC (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002267C (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C006D5DC (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 *     ?GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C006D670 (-GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_A.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C006D6DC (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C006DF80 (-UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHIL.c)
 * Callees:
 *     memmove @ 0x1C003C440 (memmove.c)
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
