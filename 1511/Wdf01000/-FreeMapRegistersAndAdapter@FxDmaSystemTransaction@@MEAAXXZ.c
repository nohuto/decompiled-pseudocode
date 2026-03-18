/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaSystemTransaction@@MEAAXXZ @ 0x1C005A6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 */

void __fastcall FxDmaSystemTransaction::FreeMapRegistersAndAdapter(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  KIRQL v3; // al
  const void *_a1; // rdx
  KIRQL v5; // si

  m_Globals = this->m_Globals;
  v3 = KfRaiseIrql(2u);
  _a1 = 0LL;
  v5 = v3;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x13u, WPP_FxDmaTransaction_hpp_Traceguids, _a1);
  }
  ((void (*)(void))this->m_AdapterInfo->AdapterObject->DmaOperations->FreeAdapterChannel)();
  KeLowerIrql(v5);
}
