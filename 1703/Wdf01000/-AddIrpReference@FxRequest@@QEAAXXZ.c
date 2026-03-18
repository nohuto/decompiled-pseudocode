/*
 * XREFs of ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C344
 * Callers:
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006E3F4 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C007C3A0 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C007F510 (-SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z.c)
 *     ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C007F560 (-AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C007F670 (-AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
