/*
 * XREFs of ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C00967D0
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C006E500 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C006E660 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D2320 (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 */

int __fastcall FxIoQueue::QueueDriverCreatedRequest(FxIoQueue *this, FxRequest *Request, unsigned __int8 ParentQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int16 v7; // bp
  int result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // r15
  int v12; // edi
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r8
  char m_ObjectFlags; // cl
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _IRP *v17; // rax
  __int16 oldFlags; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  oldFlags = 0;
  v7 = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(this, m_Globals, Request, &oldFlags);
    v7 = oldFlags;
  }
  else
  {
    result = 0;
  }
  if ( result >= 0 )
  {
    if ( ParentQueue )
    {
      CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                             + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      m_Irp = Request->m_Irp.m_Irp;
      --m_Irp->CurrentLocation;
      --m_Irp->Tail.Overlay.CurrentStackLocation;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
    }
    m_DeviceBase = Request->m_DeviceBase;
    Request->m_DeviceBase = this->m_DeviceBase;
    v12 = FxIoQueue::QueueRequestFromForward(this, Request);
    if ( v12 < 0 )
    {
      Request->m_DeviceBase = m_DeviceBase;
      if ( m_Globals->FxVerifierOn )
      {
        FxNonPagedObject::Lock(Request, (unsigned __int8 *)&oldFlags, v13);
        m_ObjectFlags = Request->m_ObjectFlags;
        Request->m_VerifierFlags |= v7;
        if ( m_ObjectFlags < 0 && (m_ForwardProgressQueue = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
          FxVerifierLock::Unlock(m_ForwardProgressQueue, oldFlags, v14);
        else
          KeReleaseSpinLock(&Request->m_NPLock.m_Lock, oldFlags);
      }
      if ( ParentQueue )
      {
        v17 = Request->m_Irp.m_Irp;
        ++v17->CurrentLocation;
        ++v17->Tail.Overlay.CurrentStackLocation;
        memset(
          &Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1],
          0,
          sizeof(Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1]));
      }
    }
    return v12;
  }
  return result;
}
