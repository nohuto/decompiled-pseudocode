/*
 * XREFs of GreSetLFONTOwner @ 0x1C00B9170
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C00B8F88 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00B90A4 (UserSetAltScaleFont.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BAF44 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     FinishStockFontInit @ 0x1C00BC170 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01DFEC4 (CreateScaledFont.c)
 *     FinishStockFontReinit @ 0x1C0284070 (FinishStockFontReinit.c)
 *     bInitStockFontsInternal @ 0x1C037D158 (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLFONTOwner(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax

  v3 = a2;
  if ( a2 == -2147483646 )
    v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(a3) = 10;
  return HmgSetOwner(a1, v3, a3);
}
