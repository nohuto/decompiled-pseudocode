/*
 * XREFs of GreSetLFONTOwner @ 0x1C00CDC80
 * Callers:
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C00CDA98 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00CDBB4 (UserSetAltScaleFont.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00D10E0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     FinishStockFontInit @ 0x1C0110A30 (FinishStockFontInit.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E9280 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 *     FinishStockFontReinit @ 0x1C0286240 (FinishStockFontReinit.c)
 *     bInitStockFontsInternal @ 0x1C0378158 (bInitStockFontsInternal.c)
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
