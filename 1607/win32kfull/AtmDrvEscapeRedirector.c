/*
 * XREFs of AtmDrvEscapeRedirector @ 0x1C02A5010
 * Callers:
 *     <none>
 * Callees:
 *     AtmDrvFontManagementRedirector @ 0x1C02A5040 (AtmDrvFontManagementRedirector.c)
 */

__int64 __fastcall AtmDrvEscapeRedirector(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  return AtmDrvFontManagementRedirector(a1, 0, a2, a3, a4, a5, a6);
}
