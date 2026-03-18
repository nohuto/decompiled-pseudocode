/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0014700
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0090FB0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0014698 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned int RefCount; // ecx
  _DEVICE_OBJECT *m_TargetPdo; // rax
  unsigned int v8; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v11; // rax
  unsigned int v12; // edx
  unsigned __int8 v13; // r8
  _FILE_OBJECT *m_TargetFileObject; // rcx
  _FILE_OBJECT *v15; // rcx
  int v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  irql = 0;
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_TargetPdo = this[-1].m_TargetPdo;
  else
    m_TargetPdo = 0LL;
  if ( m_TargetPdo )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_TargetPdo,
      (void *)0x74727453,
      318,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
      TagAddRef,
      RefCount);
  if ( Lock )
    goto LABEL_26;
  while ( this->m_State != WdfIoTargetDeleted )
  {
    if ( !this->m_WaitingForSentIo )
    {
      this->m_State = WdfIoTargetStarted;
      v8 = 0;
      this->m_WaitingForSentIo = 0;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
      FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
      goto LABEL_9;
    }
    m_Globals = this->m_Globals;
    if ( this->m_ObjectSize )
      v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v11 = 0LL;
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, WPP_FxIoTarget_cpp_Traceguids, v11);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) || m_Globals->FxVerifyDownlevel) )
    {
      if ( irql )
      {
        v16 = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
          m_Globals->Public.DriverName,
          (const char *)&v16,
          m_Globals->Public.DriverName,
          (const char *)&v16);
        if ( m_Globals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
      }
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, irql, v13);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    this->WaitForSentIoToComplete(this);
LABEL_26:
    FxNonPagedObject::Lock(this, &irql, Lock);
  }
  v8 = -1073741436;
LABEL_9:
  if ( Lock )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v15 = this[-1].m_TargetFileObject) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v15, irql, Lock);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v8;
}
