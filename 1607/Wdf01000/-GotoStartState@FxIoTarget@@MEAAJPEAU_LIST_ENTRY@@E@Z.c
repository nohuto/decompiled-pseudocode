/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C002AE30
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0089800 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C002ADC8 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned int RefCount; // ecx
  _DEVICE_OBJECT *m_TargetPdo; // rax
  unsigned int v8; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFWORKITEM__ *Handle; // rax
  unsigned int v12; // edx
  unsigned __int8 v13; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+18h] BYREF

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
    goto LABEL_19;
  while ( this->m_State != WdfIoTargetDeleted )
  {
    if ( !this->m_WaitingForSentIo )
    {
      v8 = 0;
      this->m_State = WdfIoTargetStarted;
      this->m_WaitingForSentIo = 0;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
      FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
      goto LABEL_9;
    }
    m_Globals = this->m_Globals;
    Handle = FxWmiProvider::GetHandle((FxWorkItem *)this);
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, WPP_FxIoTarget_cpp_Traceguids, Handle);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) || m_Globals->FxVerifyDownlevel)
      && irql )
    {
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(this, irql, v13);
    this->WaitForSentIoToComplete(this);
LABEL_19:
    FxNonPagedObject::Lock(this, &irql, Lock);
  }
  v8 = -1073741436;
LABEL_9:
  if ( Lock )
    FxNonPagedObject::Unlock(this, irql, Lock);
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v8;
}
