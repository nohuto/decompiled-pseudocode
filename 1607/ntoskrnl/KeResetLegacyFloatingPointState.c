/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14015DB60
 * Callers:
 *     KiParkUmsThread @ 0x1401DC264 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1406508F8 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
