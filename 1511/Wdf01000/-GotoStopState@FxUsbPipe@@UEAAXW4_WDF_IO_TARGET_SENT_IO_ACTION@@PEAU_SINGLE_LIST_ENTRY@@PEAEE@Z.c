/*
 * XREFs of ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0080110
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0075C70 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     WPP_IFR_SF_qLL @ 0x1C008087C (WPP_IFR_SF_qLL.c)
 */

void __fastcall FxUsbPipe::GotoStopState(
        FxUsbPipe *this,
        __int32 Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _WDF_IO_TARGET_SENT_IO_ACTION flags; // esi
  const void *level; // rax
  unsigned __int8 v11; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *v13; // rax
  unsigned int v14; // edx
  struct _KTHREAD *m_WorkItemThread; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  unsigned int v17; // [rsp+38h] [rbp-20h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  flags = Action;
  irql = 0;
  if ( LockSelf )
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)SentRequestListHead);
  if ( this->m_Reader )
  {
    if ( this->m_ObjectSize )
      level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)SentRequestListHead, 0x14u, traceGuid, level, flags, v17);
    flags = WdfIoTargetCancelSentIo;
  }
  FxIoTarget::GotoStopState(this, flags, SentRequestListHead, Wait, 0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      v13 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipe_cpp_Traceguids, v13);
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v14, 9u) || m_Globals->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(m_Globals);
      }
    }
    m_WorkItemThread = this->m_Reader->m_WorkItemThread;
    if ( m_WorkItemThread != KeGetCurrentThread()
      || _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)m_WorkItemThread, 9u) )
    {
      *Wait = 1;
    }
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v11);
}
