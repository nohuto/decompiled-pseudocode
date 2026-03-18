/*
 * XREFs of ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0090E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0083D30 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 */

void __fastcall FxUsbPipe::GotoRemoveState(
        FxUsbPipe *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 LockSelf,
        unsigned __int8 *Wait)
{
  KIRQL v10; // di
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *_a1; // rax
  unsigned int v13; // edx
  __int64 v14; // r10
  __int64 v15; // r10
  unsigned __int8 *v16; // rsi
  unsigned __int8 v17; // r8
  FxVerifierLock *v18; // rcx
  int irql; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  LOBYTE(irql) = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, (unsigned __int8)PendedRequestListHead);
    v10 = irql;
  }
  m_Reader = this->m_Reader;
  if ( m_Reader && m_Reader->m_ReadersSubmitted && this->m_State == WdfIoTargetStarted )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxUsbPipe_cpp_Traceguids, _a1);
    if ( this->m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v13, 9u) || *(_BYTE *)(v14 + 317)) )
    {
      irql = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( *(_BYTE *)(v15 + 318) )
        DbgBreakPoint();
    }
  }
  v16 = Wait;
  FxIoTarget::GotoRemoveState(this, NewState, PendedRequestListHead, SentRequestListHead, 0, Wait);
  if ( this->m_Reader )
    *v16 = 1;
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = *(FxVerifierLock **)&this[-1].m_InterfaceNumber) != 0LL )
      FxVerifierLock::Unlock(v18, v10, v17);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v10);
  }
}
