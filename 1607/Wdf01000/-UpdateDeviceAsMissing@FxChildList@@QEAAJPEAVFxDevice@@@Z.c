/*
 * XREFs of ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C006E180
 * Callers:
 *     imp_WdfPdoMarkMissing @ 0x1C006C9A0 (imp_WdfPdoMarkMissing.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021DF8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021E50 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006D924 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006D968 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 */

__int64 __fastcall FxChildList::UpdateDeviceAsMissing(FxChildList *this, FxDevice *Device)
{
  unsigned __int64 *p_m_ListLock; // rbp
  char v5; // bl
  KIRQL v6; // al
  _LIST_ENTRY *Blink; // r8
  KIRQL v8; // r14
  FxDevice *v9; // rax
  _LIST_ENTRY *v10; // rdx
  FxDevice *v11; // rcx
  unsigned __int8 v12; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Blink = this->m_ModificationListHead.Blink;
  v8 = v6;
  if ( Blink == &this->m_ModificationListHead )
  {
LABEL_7:
    v10 = this->m_DescriptionListHead.Blink;
    if ( v10 != &this->m_DescriptionListHead )
    {
      while ( 1 )
      {
        v11 = (FxDevice *)(this->m_StaticList ? v10[1].Blink->Blink : v10[4].Flink);
        if ( v11 == Device )
          break;
        v10 = v10->Blink;
        if ( v10 == &this->m_DescriptionListHead )
          goto LABEL_17;
      }
      v5 = 1;
      if ( (unsigned int)(LODWORD(v10[1].Flink) - 1) <= 1 )
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)v10, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = (FxDevice *)(this->m_StaticList ? Blink[-1].Flink->Blink : Blink[1].Blink);
      if ( v9 == Device )
        break;
      Blink = Blink->Blink;
      if ( Blink == &this->m_ModificationListHead )
        goto LABEL_7;
    }
    v5 = 1;
    FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Blink[-3].Blink);
  }
LABEL_17:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v8);
  FxChildList::DrainFreeListHead(this, &freeHead, v12);
  return v5 == 0 ? 0xC000000E : 0;
}
