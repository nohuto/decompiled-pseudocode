/*
 * XREFs of ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00065B4
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C00629A4 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00077C8 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxPkgIo::DispathToInCallerContextCallback(
        FxPkgIo *this,
        FxIoInCallerContext *InCallerContextInfo,
        FxRequest *Request,
        _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  WDFREQUEST__ *v8; // rbx
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *v10; // rcx

  m_Globals = this->m_Globals;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(Request, 33);
  FxRequest::SetCompletionState(Request, FxRequestCompletionStateIoPkg);
  Request->Release(Request, (void *)1952543827, 1740, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  Request->m_Presented = 1;
  if ( Request->m_ObjectSize )
    v8 = (WDFREQUEST__ *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v8 = 0LL;
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v10 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v10 = 0LL;
  if ( InCallerContextInfo->m_Method )
    InCallerContextInfo->m_Method(v10, v8);
  return 259LL;
}
