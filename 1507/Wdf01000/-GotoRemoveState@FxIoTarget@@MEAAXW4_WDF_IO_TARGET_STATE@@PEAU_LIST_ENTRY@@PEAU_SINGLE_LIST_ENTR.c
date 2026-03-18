/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0083D30
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0090E20 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0014698 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0083AA0 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 */

void __fastcall FxIoTarget::GotoRemoveState(
        FxIoTarget *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 Lock,
        unsigned __int8 *Wait)
{
  KIRQL v10; // di
  const void *_a1; // rax
  unsigned __int8 v12; // r8
  _FILE_OBJECT *m_TargetFileObject; // rcx
  unsigned __int8 v14; // r8
  unsigned __int8 *v15; // rsi
  FxIoTarget *v16; // rcx
  unsigned __int8 v17; // r8
  FxIoTarget *v18; // rcx
  _FILE_OBJECT *v19; // rcx
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
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, v10, v12);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v10);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &sentAdded, v14);
    v10 = sentAdded;
  }
  v15 = Wait;
  *Wait = 0;
  this->m_State = NewState;
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    FxIoTarget::GetSentRequestsListLocked(v16, SentRequestListHead, &this->m_SentIoListHead, (bool *)&sentAdded);
    FxIoTarget::GetSentRequestsListLocked(v18, SentRequestListHead, &this->m_IgnoredIoListHead, (bool *)&Wait);
    if ( sentAdded || (_BYTE)Wait )
    {
      this->m_Removing = 1;
      *v15 = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
    else
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
  }
  if ( Lock )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v19, v10, v17);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v10);
  }
}
