/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x140182DA0
 * Callers:
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x14069B398 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
