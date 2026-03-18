/*
 * XREFs of ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C008D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0087CD0 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     WPP_IFR_SF_qLL @ 0x1C008DF28 (WPP_IFR_SF_qLL.c)
 */

void __fastcall FxUsbPipe::GotoPurgeState(
        FxUsbPipe *this,
        __int32 Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _WDF_IO_TARGET_PURGE_IO_ACTION flags; // ebp
  const void *level; // rcx
  unsigned __int8 *v12; // rsi
  unsigned __int8 v13; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *v15; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned int v17; // [rsp+38h] [rbp-30h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  flags = Action;
  irql = 0;
  if ( LockSelf )
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
  if ( this->m_Reader )
  {
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)PendedRequestListHead, 0x16u, traceGuid, level, flags, v17);
    flags = WdfIoTargetPurgeIoAndWait;
  }
  v12 = Wait;
  FxIoTarget::GotoPurgeState(this, flags, PendedRequestListHead, SentRequestListHead, Wait, 0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbPipe_cpp_Traceguids, v15);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    *v12 = 1;
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v13);
}
