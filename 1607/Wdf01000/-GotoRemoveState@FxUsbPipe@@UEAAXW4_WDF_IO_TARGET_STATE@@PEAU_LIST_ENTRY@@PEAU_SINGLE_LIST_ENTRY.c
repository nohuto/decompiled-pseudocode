/*
 * XREFs of ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C00896D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0083A80 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 */

void __fastcall FxUsbPipe::GotoRemoveState(
        FxUsbPipe *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 LockSelf,
        unsigned __int8 *Wait)
{
  unsigned __int8 v10; // di
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v14; // rdx
  unsigned __int8 *v15; // rsi
  unsigned __int8 v16; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v10 = irql;
  }
  m_Reader = this->m_Reader;
  if ( m_Reader && m_Reader->m_ReadersSubmitted && this->m_State == WdfIoTargetStarted )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxUsbPipe_cpp_Traceguids, _a1);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 9u)
        || v14->FxVerifyDownlevel )
      {
        FxVerifierDbgBreakPoint(v14);
      }
    }
  }
  v15 = Wait;
  FxIoTarget::GotoRemoveState(this, NewState, PendedRequestListHead, SentRequestListHead, 0, Wait);
  if ( this->m_Reader )
    *v15 = 1;
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v10, v16);
}
