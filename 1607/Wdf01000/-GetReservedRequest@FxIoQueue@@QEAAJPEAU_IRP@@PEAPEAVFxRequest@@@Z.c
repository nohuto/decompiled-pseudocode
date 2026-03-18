/*
 * XREFs of ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0091634
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C00629A4 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C001BA30 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1C0091900 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, FxRequest **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // edi
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  int _a2; // ecx
  const void *_a1; // rbx
  const void *v13; // rbx
  KIRQL v14; // r15
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v17; // rcx
  FxRequest *v18; // rsi
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_ForwardProgressList; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v22; // rcx
  unsigned __int8 v23; // r8

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  switch ( m_FwdProgContext->m_Policy )
  {
    case WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest:
      _a2 = 2;
      goto LABEL_16;
    case WdfIoForwardProgressReservedPolicyUseExamine:
      if ( !m_FwdProgContext->m_IoExamineIrp.Method )
        break;
      if ( this->m_ObjectSize )
        v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v10 = 0LL;
      _a2 = m_FwdProgContext->m_IoExamineIrp.Method((WDFQUEUE__ *)v10, Irp);
      if ( (unsigned int)(_a2 - 1) > 1 )
      {
        if ( this->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        v5 = -1073741823;
        WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, _a1, _a2, -1073741823);
        FxVerifierDbgBreakPoint(m_Globals);
        return v5;
      }
LABEL_16:
      v9 = _a2 == 1;
LABEL_17:
      if ( v9 )
        goto LABEL_18;
      break;
    case WdfIoForwardProgressReservedPolicyPagingIO:
      if ( (Irp->Flags & 2) == 0 )
      {
LABEL_18:
        if ( this->m_ObjectSize )
          v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v13 = 0LL;
        v5 = -1073741823;
        WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v13, (__int64)Irp, -1073741823);
        return v5;
      }
      v9 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13;
      goto LABEL_17;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
  if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
  {
    v5 = FxIoQueue::QueueForwardProgressIrpLocked(this, Irp);
  }
  else
  {
    Flink = p_m_ReservedRequestList->Flink;
    v17 = p_m_ReservedRequestList->Flink->Flink;
    if ( p_m_ReservedRequestList->Flink->Blink != p_m_ReservedRequestList || v17->Blink != Flink )
      __fastfail(3u);
    p_m_ReservedRequestList->Flink = v17;
    v18 = (FxRequest *)&Flink[-20];
    v17->Blink = p_m_ReservedRequestList;
    p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
    p_m_ForwardProgressList = &v18->m_ForwardProgressList;
    Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
    if ( Blink->Flink != p_m_ReservedRequestInUseList )
      __fastfail(3u);
    p_m_ForwardProgressList->Flink = p_m_ReservedRequestInUseList;
    v18->m_ForwardProgressList.Blink = Blink;
    Blink->Flink = p_m_ForwardProgressList;
    p_m_ReservedRequestInUseList->Blink = p_m_ForwardProgressList;
    v18->m_Irp.m_Irp = Irp;
    FxRequest::AssignMemoryBuffers(v18, (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v22, 1024, v23);
    *ReservedRequest = v18;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v14);
  return v5;
}
