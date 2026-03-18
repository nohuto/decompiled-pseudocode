/*
 * XREFs of ?GetSgListBufferSize@FxDmaPacketTransaction@@MEAAKXZ @ 0x1C00676A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::GetSgListBufferSize(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rcx

  m_Globals = this->m_Globals;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0xFFFFFFFFLL;
}
