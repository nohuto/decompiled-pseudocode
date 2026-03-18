/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaSystemTransaction@@MEAAXXZ @ 0x1C006D8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 */

void __fastcall FxDmaSystemTransaction::FreeMapRegistersAndAdapter(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  KIRQL v3; // si
  const void *_a1; // r8

  m_Globals = this->m_Globals;
  v3 = KfRaiseIrql(2u);
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xAu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1);
  }
  ((void (*)(void))this->m_AdapterInfo->AdapterObject->DmaOperations->FreeAdapterChannel)();
  KeLowerIrql(v3);
}
