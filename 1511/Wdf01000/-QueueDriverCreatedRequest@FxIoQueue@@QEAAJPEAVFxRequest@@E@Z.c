/*
 * XREFs of ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0055C6C
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C0065120 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00BADC8 (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
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
  _IRP *v14; // rax
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
    v12 = FxIoQueue::QueueRequestFromForward(this, Request, ParentQueue);
    if ( v12 < 0 )
    {
      Request->m_DeviceBase = m_DeviceBase;
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(Request, v7, v13);
      if ( ParentQueue )
      {
        v14 = Request->m_Irp.m_Irp;
        ++v14->CurrentLocation;
        ++v14->Tail.Overlay.CurrentStackLocation;
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
