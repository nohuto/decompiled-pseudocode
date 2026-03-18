/*
 * XREFs of ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0032CBC
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0085080 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0003EA0 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1C0097F00 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, _LIST_ENTRY **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // edi
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  int _a2; // ecx
  const void *_a1; // rbx
  const void *v14; // rbx
  KIRQL v15; // r15
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rsi
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxNonPagedObject *v23; // rcx
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // r8
  FxVerifierLock *v26; // rcx
  int PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
  {
    _a2 = 2;
LABEL_18:
    v9 = _a2 == 1;
    goto LABEL_19;
  }
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyUseExamine )
  {
    if ( !m_FwdProgContext->m_IoExamineIrp.Method )
      goto LABEL_24;
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
      WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, _a1, _a2, -1073741823);
      PreviousIrql = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&PreviousIrql,
        m_Globals->Public.DriverName,
        (const char *)&PreviousIrql);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225473LL;
    }
    goto LABEL_18;
  }
  if ( m_FwdProgContext->m_Policy != WdfIoForwardProgressReservedPolicyPagingIO )
    goto LABEL_24;
  if ( (Irp->Flags & 2) == 0 )
  {
LABEL_20:
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v14, (__int64)Irp, -1073741823);
    return 3221225473LL;
  }
  v9 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13;
LABEL_19:
  if ( v9 )
    goto LABEL_20;
LABEL_24:
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
    v19 = Flink - 20;
    v18->Blink = p_m_ReservedRequestList;
    p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
    v21 = v19 + 20;
    Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
    v19[20].Flink = p_m_ReservedRequestInUseList;
    v19[20].Blink = Blink;
    if ( Blink->Flink != p_m_ReservedRequestInUseList )
      __fastfail(3u);
    Blink->Flink = v21;
    p_m_ReservedRequestInUseList->Blink = v21;
    v19[9].Blink = (_LIST_ENTRY *)Irp;
    FxRequest::AssignMemoryBuffers((FxRequest *)v19, (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock(v23, (unsigned __int8 *)&PreviousIrql, v24);
      WORD1(v19[13].Blink) |= 0x400u;
      if ( SLOBYTE(v19[1].Blink) < 0 && (v26 = (FxVerifierLock *)v19[-2].Blink) != 0LL )
        FxVerifierLock::Unlock(v26, PreviousIrql, v25);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)&v19[7], PreviousIrql);
    }
    *ReservedRequest = v19;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v15);
  return v5;
}
