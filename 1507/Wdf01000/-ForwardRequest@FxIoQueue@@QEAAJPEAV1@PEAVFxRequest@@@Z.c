/*
 * XREFs of ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0095AF4
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C006E500 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0095C5C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00D1C14 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::ForwardRequest(FxIoQueue *this, FxIoQueue *pDestQueue, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxIoQueue::Vf_VerifyForwardRequest(this, m_Globals, pDestQueue, pRequest);
  else
    result = 0;
  if ( result >= 0 )
    return FxIoQueue::ForwardRequestWorker(this, pRequest, pDestQueue);
  return result;
}
