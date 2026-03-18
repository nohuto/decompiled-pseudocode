/*
 * XREFs of ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083F00
 * Callers:
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0091140 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0083AA0 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 */

void __fastcall FxIoTarget::GotoStopState(
        FxIoTarget *this,
        _WDF_IO_TARGET_SENT_IO_ACTION Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  const void *_a1; // rax
  char v10; // r14
  unsigned __int8 m_WaitingForSentIo; // di
  KIRQL v12; // bp
  FxIoTarget *_a2; // rcx
  int v14; // esi
  int v15; // esi
  _LIST_ENTRY *p_m_SentIoListHead; // r8
  const void *v17; // rax
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v19; // r8
  _FILE_OBJECT *m_TargetFileObject; // rcx
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  _a1 = 0LL;
  v10 = 0;
  m_WaitingForSentIo = 0;
  v12 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)SentRequestListHead);
    v12 = irql;
    _a1 = 0LL;
  }
  _a2 = (FxIoTarget *)(unsigned int)this->m_State;
  if ( (_DWORD)_a2 == 1 || (_DWORD)_a2 == 6 )
  {
    this->m_State = WdfIoTargetStopped;
  }
  else if ( (_DWORD)_a2 != 2 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_ql(this->m_Globals, 4u, 0xEu, 0x11u, WPP_FxIoTarget_cpp_Traceguids, _a1, (int)_a2);
  }
  v14 = Action - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        m_WaitingForSentIo = 0;
      goto LABEL_23;
    }
  }
  else
  {
    v10 = 1;
  }
  p_m_SentIoListHead = &this->m_SentIoListHead;
  if ( p_m_SentIoListHead->Flink == p_m_SentIoListHead )
  {
    m_WaitingForSentIo = this->m_WaitingForSentIo;
    if ( m_WaitingForSentIo )
    {
      if ( this->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x12u, WPP_FxIoTarget_cpp_Traceguids, v17);
    }
  }
  else
  {
    m_WaitingForSentIo = 1;
    if ( v10 )
      FxIoTarget::GetSentRequestsListLocked(_a2, SentRequestListHead, p_m_SentIoListHead, (bool *)&irql);
  }
LABEL_23:
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  *Wait = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, v12, v19);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v12);
  }
}
