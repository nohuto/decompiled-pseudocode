/*
 * XREFs of ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0097FA0
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C0004430 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0003EA0 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1C000B600 (-GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0077068 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0097E64 (-PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::ReturnReservedRequest(FxIoQueue *this, FxRequest *ReservedRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v6; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _LIST_ENTRY **ForwardProgressIrpLocked; // rbp
  KIRQL v9; // r11
  __int64 v10; // rdx
  FxNonPagedObject *v11; // rcx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  FxVerifierLock *v14; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(ReservedRequest, &PreviousIrql, a3);
    ReservedRequest->m_VerifierFlags &= ~0x400u;
    if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)ReservedRequest[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v6);
    }
    else
    {
      KeReleaseSpinLock(&ReservedRequest->m_NPLock.m_Lock, PreviousIrql);
    }
  }
  KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  ForwardProgressIrpLocked = FxIoQueue::GetForwardProgressIrpLocked(this, 0LL);
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v9);
  ReservedRequest->m_SystemBuffer.m_Buffer = 0LL;
  ReservedRequest->m_OutputBuffer.m_Buffer = 0LL;
  FxRequestBase::ClearFieldsForReuse(ReservedRequest, v10);
  if ( ForwardProgressIrpLocked )
  {
    ReservedRequest->m_Irp.m_Irp = (_IRP *)ForwardProgressIrpLocked;
    FxRequest::AssignMemoryBuffers(ReservedRequest, (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock(v11, &PreviousIrql, v12);
      ReservedRequest->m_VerifierFlags |= 0x400u;
      if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0
        && (v14 = (FxVerifierLock *)ReservedRequest[-1].m_ForwardProgressQueue) != 0LL )
      {
        FxVerifierLock::Unlock(v14, PreviousIrql, v13);
      }
      else
      {
        KeReleaseSpinLock(&ReservedRequest->m_NPLock.m_Lock, PreviousIrql);
      }
    }
    FxIoQueue::QueueRequest(this, ReservedRequest, v12);
  }
  else
  {
    FxIoQueue::PutBackReservedRequest(this, ReservedRequest);
  }
}
