/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x140154420
 * Callers:
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x14061C814 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
