/*
 * XREFs of ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0083A3C
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00083C0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1C001E2A0 (-GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0022D20 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0055FBC (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C006BA9C (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0083900 (-PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::ReturnReservedRequest(FxIoQueue *this, FxRequest *ReservedRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY **ForwardProgressIrpLocked; // rbp
  KIRQL v7; // r11
  __int64 v8; // rdx
  FxRequestBase *v9; // rcx
  unsigned __int8 v10; // r8

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::ClearVerifierFlags(ReservedRequest, 1024, a3);
  KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  ForwardProgressIrpLocked = FxIoQueue::GetForwardProgressIrpLocked(this, 0LL);
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v7);
  ReservedRequest->m_SystemBuffer.m_Buffer = 0LL;
  ReservedRequest->m_OutputBuffer.m_Buffer = 0LL;
  FxRequestBase::ClearFieldsForReuse(ReservedRequest, v8);
  if ( ForwardProgressIrpLocked )
  {
    ReservedRequest->m_Irp.m_Irp = (_IRP *)ForwardProgressIrpLocked;
    FxRequest::AssignMemoryBuffers(ReservedRequest, (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v9, 1024, v10);
    FxIoQueue::QueueRequest(this, ReservedRequest, v10);
  }
  else
  {
    FxIoQueue::PutBackReservedRequest(this, ReservedRequest);
  }
}
