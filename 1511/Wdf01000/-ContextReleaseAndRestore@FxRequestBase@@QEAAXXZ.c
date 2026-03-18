/*
 * XREFs of ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0055AF8
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006070 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0019880 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0076F18 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0055ACC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxRequestBase::ContextReleaseAndRestore(FxRequestBase *this)
{
  FxRequestContext *m_RequestContext; // rcx

  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( this->m_Irp.m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      FxRequestBase::VerifierClearFormatted(this);
    }
  }
}
