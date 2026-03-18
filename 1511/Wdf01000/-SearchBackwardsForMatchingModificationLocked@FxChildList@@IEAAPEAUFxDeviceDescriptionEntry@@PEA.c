/*
 * XREFs of ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0026934
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0027090 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C005F95C (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C005FA5C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0060428 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 * Callees:
 *     ?CompareId@FxChildList@@IEAAEPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0026420 (-CompareId@FxChildList@@IEAAEPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 */

FxDeviceDescriptionEntry *__fastcall FxChildList::SearchBackwardsForMatchingModificationLocked(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Id)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_ModificationListHead; // rsi

  Blink = this->m_ModificationListHead.Blink;
  p_m_ModificationListHead = &this->m_ModificationListHead;
  while ( 1 )
  {
    if ( Blink == p_m_ModificationListHead )
      return 0LL;
    if ( FxChildList::CompareId(this, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Blink[-1].Flink, Id) )
      break;
    Blink = Blink->Blink;
  }
  return (FxDeviceDescriptionEntry *)&Blink[-3].Blink;
}
