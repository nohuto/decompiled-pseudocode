/*
 * XREFs of ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0009D68
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0065A68 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014060 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxPkgIo::DispathToInCallerContextCallback(
        FxPkgIo *this,
        FxIoInCallerContext *InCallerContextInfo,
        FxRequest *Request,
        _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v9; // rbx
  FxDeviceBase *m_DeviceBase; // rcx
  bool v11; // zf
  void (__fastcall *m_Method)(WDFDEVICE__ *, WDFREQUEST__ *); // rax
  unsigned __int16 v13; // dx
  unsigned __int64 v14; // rcx

  m_Globals = this->m_Globals;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(Request, 33);
  FxRequest::SetCompletionState(Request, FxRequestCompletionStateIoPkg);
  Request->Release(Request, (void *)1952543827, 1740, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  m_ObjectSize = Request->m_ObjectSize;
  Request->m_Presented = 1;
  v9 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  m_DeviceBase = this->m_DeviceBase;
  v11 = m_ObjectSize == 0;
  m_Method = InCallerContextInfo->m_Method;
  if ( v11 )
    v9 = 0LL;
  v13 = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v14 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v13 )
      v14 = 0LL;
    m_Method((WDFDEVICE__ *)v14, (WDFREQUEST__ *)v9);
  }
  return 259LL;
}
