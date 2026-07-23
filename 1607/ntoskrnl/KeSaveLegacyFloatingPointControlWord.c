/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14015E0E0
 * Callers:
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140651BF0 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
