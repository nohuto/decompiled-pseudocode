/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00CA160
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00898A4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     IsFinishStockFontReinitSupported_0 @ 0x1C0001720 (IsFinishStockFontReinitSupported_0.c)
 *     FinishStockFontReinit_0 @ 0x1C0001728 (FinishStockFontReinit_0.c)
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
