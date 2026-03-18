/*
 * XREFs of ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0069CA0
 * Callers:
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C005A45C (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0069D00 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEAD@Z.c)
 *     ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C006CD2C (-SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z.c)
 *     ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C006CD80 (-AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z.c)
 *     ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C006CEF0 (-AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::AddIrpReference(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( m_Globals->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
    FxNonPagedObject::Unlock(this, irql, v5);
  }
  _InterlockedIncrement(&this->m_IrpReferenceCount);
}
