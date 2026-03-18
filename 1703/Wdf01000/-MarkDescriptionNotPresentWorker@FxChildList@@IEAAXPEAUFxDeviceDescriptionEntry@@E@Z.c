/*
 * XREFs of ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0071330
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C002D804 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C0071384 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0071624 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0071AEC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C0071BC8 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxChildList::MarkDescriptionNotPresentWorker(
        FxChildList *this,
        FxDeviceDescriptionEntry *DescriptionEntry,
        unsigned __int8 ModificationCanBeQueued)
{
  bool v3; // al
  _LIST_ENTRY *p_m_ModificationLink; // rax
  _LIST_ENTRY *Blink; // r8

  if ( ModificationCanBeQueued )
    v3 = DescriptionEntry->m_ModificationLink.Flink == &DescriptionEntry->m_ModificationLink;
  else
    v3 = 1;
  if ( v3 )
  {
    DescriptionEntry->m_FoundInLastScan = 0;
    p_m_ModificationLink = &DescriptionEntry->m_ModificationLink;
    DescriptionEntry->m_ModificationState = ModificationRemoveNotify;
    Blink = this->m_ModificationListHead.Blink;
    if ( Blink->Flink != &this->m_ModificationListHead )
      __fastfail(3u);
    p_m_ModificationLink->Flink = &this->m_ModificationListHead;
    DescriptionEntry->m_ModificationLink.Blink = Blink;
    Blink->Flink = p_m_ModificationLink;
    this->m_ModificationListHead.Blink = p_m_ModificationLink;
  }
}
