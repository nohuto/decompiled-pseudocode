/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x140154410
 * Callers:
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
