/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x140182D90
 * Callers:
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
