/*
 * XREFs of ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00073B0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 * Callees:
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C001BA30 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1C001D264 (-GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006347C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0078594 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007A3DC (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0091864 (-PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::ReturnReservedRequest(FxIoQueue *this, FxRequest *ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY **ForwardProgressIrpLocked; // rbp
  KIRQL v6; // r11
  FxRequestBase *v7; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::ClearVerifierFlags(ReservedRequest, 1024);
  KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  ForwardProgressIrpLocked = FxIoQueue::GetForwardProgressIrpLocked(this, 0LL);
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v6);
  ReservedRequest->m_SystemBuffer.m_Buffer = 0LL;
  ReservedRequest->m_OutputBuffer.m_Buffer = 0LL;
  FxRequestBase::ClearFieldsForReuse(ReservedRequest);
  if ( ForwardProgressIrpLocked )
  {
    ReservedRequest->m_Irp.m_Irp = (_IRP *)ForwardProgressIrpLocked;
    FxRequest::AssignMemoryBuffers(ReservedRequest, (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v7, 1024);
    FxIoQueue::QueueRequest(this, ReservedRequest);
  }
  else
  {
    FxIoQueue::PutBackReservedRequest(this, ReservedRequest);
  }
}
