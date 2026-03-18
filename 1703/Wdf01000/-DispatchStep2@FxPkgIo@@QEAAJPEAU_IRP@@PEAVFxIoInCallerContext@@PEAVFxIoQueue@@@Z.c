/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0065A68
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0088DA0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0009D68 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0039590 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00667B4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C418 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0093E50 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C009575C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  char v8; // r13
  char v9; // r15
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v12; // eax
  FxRequest *v13; // rsi
  int _a1; // ebx
  int v15; // eax
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  FxRequest *request; // [rsp+60h] [rbp+8h] BYREF

  request = 0LL;
  v8 = 0;
  if ( !Queue || (v9 = 1, !Queue->m_SupportForwardProgress) )
    v9 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v8 = 1;
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
LABEL_15:
      if ( !this->m_Filter || Queue )
      {
        if ( v9 )
          goto LABEL_18;
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
      }
$CompleteIrp:
      Irp->IoStatus.Status = _a1;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto $IrpIsGone;
    }
    if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, request);
  }
  if ( _a1 < 0 )
    goto LABEL_15;
  if ( !v9 || !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
    goto LABEL_21;
  m_ObjectSize = v13->m_ObjectSize;
  v17 = (unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v13->m_Presented = 1;
  if ( !m_ObjectSize )
    v17 = 0LL;
  v18 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !Queue->m_ObjectSize )
    v18 = 0LL;
  if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *))Queue->m_FwdProgContext->m_IoResourcesAllocate.Method)(
         v18,
         v17,
         Queue->m_FwdProgContext) >= 0 )
    goto LABEL_21;
  FxRequest::FreeRequest(v13);
  request = 0LL;
LABEL_18:
  _a1 = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
  if ( _a1 == 259 )
    goto $IrpIsGone;
  if ( _a1 < 0 )
    goto $CompleteIrp;
  v13 = request;
LABEL_21:
  if ( IoInCallerCtx && IoInCallerCtx->m_Method && !v13->m_Reserved )
  {
    v13->m_InternalContext = Queue;
    v15 = FxPkgIo::DispathToInCallerContextCallback(this, IoInCallerCtx, v13, Irp);
  }
  else
  {
    v15 = FxIoQueue::QueueRequest(Queue, v13);
  }
  _a1 = v15;
$IrpIsGone:
  if ( v8 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
