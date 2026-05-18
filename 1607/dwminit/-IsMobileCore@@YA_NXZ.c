/*
 * XREFs of ?IsMobileCore@@YA_NXZ @ 0x180001628
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x180007710 (IsCreateAppChromePresent.c)
 */

bool IsMobileCore(void)
{
  return (unsigned __int8)IsCreateAppChromePresent() != 0;
}
