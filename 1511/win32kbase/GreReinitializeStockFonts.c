/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00BE5F0
 * Callers:
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0088654 (-SetDPIinSetup@@YAJXZ.c)
 * Callees:
 *     IsFinishStockFontReinitSupported_0 @ 0x1C00016B0 (IsFinishStockFontReinitSupported_0.c)
 *     FinishStockFontReinit_0 @ 0x1C00016B8 (FinishStockFontReinit_0.c)
 */

__int64 GreReinitializeStockFonts()
{
  __int64 result; // rax

  result = IsFinishStockFontReinitSupported_0();
  if ( (int)result >= 0 )
    result = FinishStockFontReinit_0();
  gDrvDpiAdjustedForLoggedOnUser = 1;
  return result;
}
