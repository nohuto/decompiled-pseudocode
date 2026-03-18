/*
 * XREFs of ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C005C594
 * Callers:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxRequestBase::ContextReleaseAndRestore(FxRequestBase *this)
{
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 v3; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v5; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( this->m_Irp.m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
        {
          FxNonPagedObject::Lock(this, &PreviousIrql, v3);
          this->m_VerifierFlags &= ~0x80u;
          if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)this[-1].m_IrpQueue) != 0LL )
            FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql, v5);
          else
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
        }
      }
    }
  }
}
