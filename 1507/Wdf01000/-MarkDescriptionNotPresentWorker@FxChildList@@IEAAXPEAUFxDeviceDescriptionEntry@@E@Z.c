/*
 * XREFs of ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00673E8
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C001D5B8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C001DBF0 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006742C (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0067734 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0067CC0 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C0067D98 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxChildList::MarkDescriptionNotPresentWorker(
        FxChildList *this,
        FxDeviceDescriptionEntry *DescriptionEntry,
        unsigned __int8 ModificationCanBeQueued)
{
  _LIST_ENTRY *p_m_ModificationLink; // rax
  _LIST_ENTRY *Blink; // r8

  if ( !ModificationCanBeQueued || DescriptionEntry->m_ModificationLink.Flink == &DescriptionEntry->m_ModificationLink )
  {
    DescriptionEntry->m_FoundInLastScan = 0;
    p_m_ModificationLink = &DescriptionEntry->m_ModificationLink;
    DescriptionEntry->m_ModificationState = ModificationRemoveNotify;
    Blink = this->m_ModificationListHead.Blink;
    DescriptionEntry->m_ModificationLink.Flink = &this->m_ModificationListHead;
    DescriptionEntry->m_ModificationLink.Blink = Blink;
    if ( Blink->Flink != &this->m_ModificationListHead )
      __fastfail(3u);
    Blink->Flink = p_m_ModificationLink;
    this->m_ModificationListHead.Blink = p_m_ModificationLink;
  }
}
