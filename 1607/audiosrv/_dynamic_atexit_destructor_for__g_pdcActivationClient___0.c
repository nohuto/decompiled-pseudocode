/*
 * XREFs of _dynamic_atexit_destructor_for__g_pdcActivationClient___0 @ 0x18003C950
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z @ 0x1800359C8 (--R-$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__g_pdcActivationClient___0(__int64 a1)
{
  if ( g_pdcActivationClient )
    std::default_delete<CPdcActivationClient>::operator()(a1, (CPdcActivationClient *)g_pdcActivationClient);
}
