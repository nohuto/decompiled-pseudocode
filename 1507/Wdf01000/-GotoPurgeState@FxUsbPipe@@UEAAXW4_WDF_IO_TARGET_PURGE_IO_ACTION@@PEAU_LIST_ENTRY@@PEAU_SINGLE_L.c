/*
 * XREFs of ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0090C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083B40 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     WPP_IFR_SF_qLL @ 0x1C0092554 (WPP_IFR_SF_qLL.c)
 */

void __fastcall FxUsbPipe::GotoPurgeState(
        FxUsbPipe *this,
        __int32 Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _WDF_IO_TARGET_PURGE_IO_ACTION flags; // esi
  KIRQL v11; // di
  const void *level; // rax
  unsigned __int8 *v13; // r14
  unsigned __int8 v14; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *v16; // rax
  FxVerifierLock *v17; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  unsigned int v19; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  flags = Action;
  v11 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v11 = irql;
  }
  if ( this->m_Reader )
  {
    if ( this->m_ObjectSize )
      level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)PendedRequestListHead, 0x16u, traceGuid, level, flags, v19);
    flags = WdfIoTargetPurgeIoAndWait;
  }
  v13 = Wait;
  FxIoTarget::GotoPurgeState(this, flags, PendedRequestListHead, SentRequestListHead, Wait, 0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      v16 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbPipe_cpp_Traceguids, v16);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    v11 = irql;
    *v13 = 1;
  }
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v17 = *(FxVerifierLock **)&this[-1].m_InterfaceNumber) != 0LL )
      FxVerifierLock::Unlock(v17, v11, v14);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
  }
}
