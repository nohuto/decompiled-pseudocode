/*
 * XREFs of ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0087CD0
 * Callers:
 *     ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C008D2E0 (-GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_L.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C002A9F8 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C002AA78 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxIoTarget::GotoPurgeState(
        FxIoTarget *this,
        _WDF_IO_TARGET_PURGE_IO_ACTION Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  unsigned __int8 m_WaitingForSentIo; // di
  unsigned __int8 v11; // bp
  _WDF_IO_TARGET_STATE _a2; // edx
  const void *_a1; // rcx
  FxIoTarget *v14; // rcx
  int v15; // esi
  const void *v16; // rcx
  unsigned __int8 *v17; // rax
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v19; // r8
  unsigned __int8 added; // [rsp+78h] [rbp+10h] BYREF

  m_WaitingForSentIo = 0;
  v11 = 0;
  added = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &added, (unsigned __int8)PendedRequestListHead);
    v11 = added;
  }
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) <= 1 )
  {
    this->m_State = WdfIoTargetPurged;
  }
  else if ( _a2 != WdfIoTargetPurged )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 4u, 0xEu, 0x14u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  FxIoTarget::GetSentRequestsListLocked(v14, SentRequestListHead, &this->m_SentIoListHead, (bool *)&added);
  v15 = Action - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
      m_WaitingForSentIo = 0;
  }
  else if ( added )
  {
    m_WaitingForSentIo = 1;
  }
  else
  {
    m_WaitingForSentIo = this->m_WaitingForSentIo;
    if ( m_WaitingForSentIo )
    {
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTarget_cpp_Traceguids, v16);
      FxVerifierDbgBreakPoint(this->m_Globals);
    }
  }
  v17 = Wait;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  *v17 = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v11, v19);
}
