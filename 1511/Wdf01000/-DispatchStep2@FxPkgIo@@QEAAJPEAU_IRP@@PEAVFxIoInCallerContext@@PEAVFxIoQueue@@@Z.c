/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0055334
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0076BF0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0006C7C (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0031FE4 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0055FBC (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InvokeAllocateResourcesCallback@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00561A4 (-InvokeAllocateResourcesCallback@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0069D70 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0081E7C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00836D0 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  char v4; // r13
  bool v9; // r15
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v12; // eax
  FxRequest *v13; // rdi
  int _a1; // ebx
  int ReservedRequest; // eax
  int v16; // eax
  FxRequest *request; // [rsp+60h] [rbp+8h] BYREF

  request = 0LL;
  v4 = 0;
  v9 = Queue && Queue->m_SupportForwardProgress;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v4 = 1;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  v12 = FxRequest::_CreateForPackage(this->m_Device, p_RequestAttributes, Irp, &request);
  v13 = request;
  _a1 = v12;
  if ( v9 )
  {
    if ( v12 < 0 )
    {
LABEL_16:
      if ( !this->m_Filter || Queue )
      {
        if ( v9 )
          goto LABEL_19;
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
      }
$CompleteIrp_0:
      Irp->IoStatus.Information = 0LL;
      Irp->IoStatus.Status = _a1;
      IofCompleteRequest(Irp, 0);
      goto $IrpIsGone;
    }
    if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, request);
  }
  if ( _a1 < 0 )
    goto LABEL_16;
  if ( !v9 || FxIoQueue::InvokeAllocateResourcesCallback(Queue, v13) >= 0 )
    goto LABEL_22;
  FxRequest::FreeRequest(v13);
  request = 0LL;
LABEL_19:
  ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
  _a1 = ReservedRequest;
  if ( ReservedRequest == 259 )
    goto $IrpIsGone;
  if ( ReservedRequest < 0 )
    goto $CompleteIrp_0;
  v13 = request;
LABEL_22:
  if ( IoInCallerCtx && IoInCallerCtx->m_Method && !v13->m_Reserved )
  {
    v13->m_InternalContext = Queue;
    v16 = FxPkgIo::DispathToInCallerContextCallback(this, IoInCallerCtx, v13, Irp);
  }
  else
  {
    v16 = FxIoQueue::QueueRequest(Queue, v13);
  }
  _a1 = v16;
$IrpIsGone:
  if ( v4 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
