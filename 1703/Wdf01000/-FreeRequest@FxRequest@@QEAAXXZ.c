/*
 * XREFs of ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C418
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C001D8D8 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0065A68 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0093E50 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C00956D8 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 * Callees:
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00671E8 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
