/*
 * XREFs of ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0091140
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083F00 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     WPP_IFR_SF_qLL @ 0x1C0092554 (WPP_IFR_SF_qLL.c)
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
  FxVerifierLock *v16; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+38h] [rbp-30h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

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
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)SentRequestListHead, 0x14u, traceGuid, level, flags, v18);
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
      if ( m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v14, 9u) || m_Globals->FxVerifyDownlevel) )
      {
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( m_Globals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
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
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v16 = *(FxVerifierLock **)&this[-1].m_InterfaceNumber) != 0LL )
      FxVerifierLock::Unlock(v16, irql, v11);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
}
