/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4
 * Callers:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009921C (hsurfCreateCompatibleSurface.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreGetPaletteEntries @ 0x1C00EAB90 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00EB124 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00EB1A8 (DxEngSetPaletteState.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025E60C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0263E74 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C0280340 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C029A0C0 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x1C02A86A0 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B0C50 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02B1E30 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02B1EB0 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02B21D0 (GreSetPaletteEntries.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C02B2640 (NtGdiGetNearestPaletteIndex.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
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
