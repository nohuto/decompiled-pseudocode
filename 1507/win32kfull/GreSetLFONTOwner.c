/*
 * XREFs of GreSetLFONTOwner @ 0x1C00FCA30
 * Callers:
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C0137ED0 (UserSetAltScaleFont.c)
 *     CreateFontFromWinIni @ 0x1C0137FF8 (CreateFontFromWinIni.c)
 *     FinishStockFontInit @ 0x1C013D0D0 (FinishStockFontInit.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C013DA84 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E8C50 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 *     FinishStockFontReinit @ 0x1C0285EF0 (FinishStockFontReinit.c)
 *     bInitStockFontsInternal @ 0x1C03783D8 (bInitStockFontsInternal.c)
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
