/*
 * XREFs of EngSetPrinterData @ 0x14031B060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall EngSetPrinterData(
        HANDLE hPrinter,
        LPWSTR pType,
        DWORD dwType,
        LPBYTE lpbPrinterData,
        DWORD cjPrinterData)
{
  EngSetLastError(0x32u);
  return 50;
}
