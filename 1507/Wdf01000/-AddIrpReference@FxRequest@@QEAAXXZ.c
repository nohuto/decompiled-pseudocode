/*
 * XREFs of ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0074F10
 * Callers:
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006100C (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0074F90 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEAD@Z.c)
 *     ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C00788EC (-SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z.c)
 *     ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C0078940 (-AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z.c)
 *     ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C0078AB0 (-AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::AddIrpReference(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( m_Globals->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v5);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
  }
  _InterlockedIncrement(&this->m_IrpReferenceCount);
}
