/*
 * XREFs of ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0031D9C
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C000B7D0 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0032A98 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0085080 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0097DE4 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 * Callees:
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005CF20 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

void __fastcall FxRequest::FreeRequest(FxRequest *this)
{
  FxRequestContext *m_RequestContext; // rcx

  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  this->DeleteObject(this);
}
