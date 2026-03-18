/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C002A8F0
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C008D420 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C002A9F8 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C002AA78 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall FxIoTarget::GotoRemoveState(
        FxIoTarget *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 Lock,
        unsigned __int8 *Wait)
{
  unsigned __int8 v10; // di
  unsigned __int8 *v11; // rsi
  FxIoTarget *v12; // rcx
  unsigned __int8 v13; // r8
  FxIoTarget *v14; // rcx
  const void *_a1; // rcx
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8
  unsigned __int8 sentAdded; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  sentAdded = 0;
  if ( Lock )
  {
    FxNonPagedObject::Lock(this, &sentAdded, (unsigned __int8)PendedRequestListHead);
    v10 = sentAdded;
  }
  if ( this->m_WaitingForSentIo )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x17u, WPP_FxIoTarget_cpp_Traceguids, _a1);
    FxNonPagedObject::Unlock(this, v10, v16);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &sentAdded, v17);
    v10 = sentAdded;
  }
  v11 = Wait;
  *Wait = 0;
  this->m_State = NewState;
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    FxIoTarget::GetSentRequestsListLocked(v12, SentRequestListHead, &this->m_SentIoListHead, &sentAdded);
    FxIoTarget::GetSentRequestsListLocked(
      v14,
      SentRequestListHead,
      &this->m_IgnoredIoListHead,
      (unsigned __int8 *)&Wait);
    if ( sentAdded || (_BYTE)Wait )
    {
      this->m_Removing = 1;
      *v11 = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
    else
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
  }
  if ( Lock )
    FxNonPagedObject::Unlock(this, v10, v13);
}
