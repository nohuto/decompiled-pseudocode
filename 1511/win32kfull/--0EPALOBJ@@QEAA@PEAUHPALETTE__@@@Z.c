/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0
 * Callers:
 *     hsurfCreateCompatibleSurface @ 0x1C0040E24 (hsurfCreateCompatibleSurface.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     DxEngSelectPaletteToSurface @ 0x1C007F4E0 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C007F560 (DxEngSetPaletteState.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreGetPaletteEntries @ 0x1C0109D20 (GreGetPaletteEntries.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C02625F4 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C02806B0 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0299B90 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x1C02A7DF0 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AFE60 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02B10D0 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02B1138 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02B1470 (GreSetPaletteEntries.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C02B18D0 (NtGdiGetNearestPaletteIndex.c)
 *     NtGdiResizePalette @ 0x1C02B1950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  HPALETTE v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = a2;
  LOBYTE(a2) = 8;
  *(_QWORD *)this = HmgShareLockCheck(v2, a2);
  return this;
}
