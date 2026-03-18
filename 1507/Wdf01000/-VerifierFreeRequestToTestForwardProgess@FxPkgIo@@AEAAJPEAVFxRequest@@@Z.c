/*
 * XREFs of ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0032A98
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0085080 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0031D9C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgIo::VerifierFreeRequestToTestForwardProgess(FxPkgIo *this, FxRequest *Request)
{
  unsigned int FxEnhancedVerifierOptions; // r8d
  unsigned int v3; // r8d

  FxEnhancedVerifierOptions = this->m_Globals->FxEnhancedVerifierOptions;
  if ( (FxEnhancedVerifierOptions & 0x10000) == 0 )
  {
    if ( (FxEnhancedVerifierOptions & 0x20000) == 0 )
      return 0LL;
    v3 = 1103515245 * this->m_RandomSeed + 12345;
    this->m_RandomSeed = v3;
    if ( (HIWORD(v3) & 0x7FFF) != 17 * ((HIWORD(v3) & 0x7FFF) / 0x11u) )
      return 0LL;
  }
  FxRequest::FreeRequest(Request);
  return 3221225626LL;
}
