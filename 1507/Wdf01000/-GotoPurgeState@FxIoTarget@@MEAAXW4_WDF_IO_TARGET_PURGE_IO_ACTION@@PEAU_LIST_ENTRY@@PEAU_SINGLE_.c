/*
 * XREFs of ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083B40
 * Callers:
 *     ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0090C80 (-GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_L.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0014698 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0083AA0 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
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
  KIRQL v11; // bp
  _WDF_IO_TARGET_STATE _a2; // ecx
  const void *_a1; // rax
  FxIoTarget *v14; // rcx
  int v15; // esi
  const void *v16; // rax
  __int64 v17; // rax
  unsigned __int8 *v18; // rax
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v20; // r8
  _FILE_OBJECT *m_TargetFileObject; // rcx
  int irql; // [rsp+78h] [rbp+10h] BYREF

  m_WaitingForSentIo = 0;
  v11 = 0;
  LOBYTE(irql) = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, (unsigned __int8)PendedRequestListHead);
    v11 = irql;
  }
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) <= 1 )
  {
    this->m_State = WdfIoTargetPurged;
  }
  else if ( _a2 != WdfIoTargetPurged )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 4u, 0xEu, 0x14u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  FxIoTarget::GetSentRequestsListLocked(v14, SentRequestListHead, &this->m_SentIoListHead, (bool *)&irql);
  v15 = Action - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
      m_WaitingForSentIo = 0;
  }
  else if ( (_BYTE)irql )
  {
    m_WaitingForSentIo = 1;
  }
  else
  {
    m_WaitingForSentIo = this->m_WaitingForSentIo;
    if ( m_WaitingForSentIo )
    {
      v16 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTarget_cpp_Traceguids, v16);
      irql = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( *(_BYTE *)(v17 + 318) )
        DbgBreakPoint();
    }
  }
  v18 = Wait;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  *v18 = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, v11, v20);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
  }
}
