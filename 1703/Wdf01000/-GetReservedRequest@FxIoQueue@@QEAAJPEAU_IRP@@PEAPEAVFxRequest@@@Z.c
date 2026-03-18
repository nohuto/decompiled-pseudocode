/*
 * XREFs of ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C009575C
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0065A68 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0035500 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1C0095A34 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, FxRequest **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // edi
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  char v9; // al
  int _a2; // eax
  const void *_a1; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v14; // rbx
  KIRQL v15; // r15
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v18; // rdx
  FxRequest *v19; // rsi
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_ForwardProgressList; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v23; // rcx
  unsigned __int8 v24; // r8

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
  {
    _a2 = 2;
    goto LABEL_16;
  }
  if ( m_FwdProgContext->m_Policy != WdfIoForwardProgressReservedPolicyUseExamine )
  {
    if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyPagingIO )
    {
      if ( (Irp->Flags & 2) == 0 || (v9 = 1, Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13) )
        v9 = 0;
      _a2 = (v9 != 0) + 1;
      goto LABEL_16;
    }
LABEL_20:
    v15 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
    if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
    {
      v5 = FxIoQueue::QueueForwardProgressIrpLocked(this, Irp);
    }
    else
    {
      Flink = p_m_ReservedRequestList->Flink;
      v18 = p_m_ReservedRequestList->Flink->Flink;
      if ( p_m_ReservedRequestList->Flink->Blink != p_m_ReservedRequestList || v18->Blink != Flink )
        __fastfail(3u);
      p_m_ReservedRequestList->Flink = v18;
      v19 = (FxRequest *)&Flink[-20];
      v18->Blink = p_m_ReservedRequestList;
      p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
      p_m_ForwardProgressList = &v19->m_ForwardProgressList;
      Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
      if ( Blink->Flink != p_m_ReservedRequestInUseList )
        __fastfail(3u);
      p_m_ForwardProgressList->Flink = p_m_ReservedRequestInUseList;
      v19->m_ForwardProgressList.Blink = Blink;
      Blink->Flink = p_m_ForwardProgressList;
      p_m_ReservedRequestInUseList->Blink = p_m_ForwardProgressList;
      v19->m_Irp.m_Irp = Irp;
      FxRequest::AssignMemoryBuffers(v19, (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v23, 1024, v24);
      *ReservedRequest = v19;
    }
    KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v15);
    return v5;
  }
  if ( !m_FwdProgContext->m_IoExamineIrp.Method )
    goto LABEL_20;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !this->m_ObjectSize )
    v12 = 0LL;
  _a2 = m_FwdProgContext->m_IoExamineIrp.Method((WDFQUEUE__ *)v12, Irp);
  if ( (unsigned int)(_a2 - 1) <= 1 )
  {
LABEL_16:
    if ( _a2 == 1 )
    {
      m_ObjectSize = this->m_ObjectSize;
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v14 = 0LL;
      v5 = -1073741823;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v14, (__int64)Irp, -1073741823);
      return v5;
    }
    goto LABEL_20;
  }
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  v5 = -1073741823;
  WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, _a1, _a2, -1073741823);
  FxVerifierDbgBreakPoint(m_Globals);
  return v5;
}
