/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0075AE0
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C007FE80 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0019614 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00758D4 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
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
  const void *_a1; // rax
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned __int8 *v14; // rsi
  FxIoTarget *v15; // rcx
  unsigned __int8 v16; // r8
  FxIoTarget *v17; // rcx
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
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x17u, WPP_FxIoTarget_cpp_Traceguids, _a1);
    FxNonPagedObject::Unlock(this, v10, v12);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &sentAdded, v13);
    v10 = sentAdded;
  }
  v14 = Wait;
  *Wait = 0;
  this->m_State = NewState;
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    FxIoTarget::GetSentRequestsListLocked(v15, SentRequestListHead, &this->m_SentIoListHead, (bool *)&sentAdded);
    FxIoTarget::GetSentRequestsListLocked(v17, SentRequestListHead, &this->m_IgnoredIoListHead, (bool *)&Wait);
    if ( sentAdded || (_BYTE)Wait )
    {
      this->m_Removing = 1;
      *v14 = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
    else
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
  }
  if ( Lock )
    FxNonPagedObject::Unlock(this, v10, v16);
}
