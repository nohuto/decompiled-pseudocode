/*
 * XREFs of ?IsMobileCore@@YA_NXZ @ 0x180001688
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x1800070D4 (IsCreateAppChromePresent.c)
 */

bool IsMobileCore(void)
{
  return (unsigned __int8)IsCreateAppChromePresent() != 0;
}
