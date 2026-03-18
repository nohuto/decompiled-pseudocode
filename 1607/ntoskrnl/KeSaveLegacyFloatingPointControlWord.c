/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14015DB70
 * Callers:
 *     KiSwapToUmsThread @ 0x1406508F8 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140651B0C (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
