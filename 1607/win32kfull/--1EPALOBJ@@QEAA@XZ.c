/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60
 * Callers:
 *     DxEngSetPaletteState @ 0x1C0008140 (DxEngSetPaletteState.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreGetPaletteEntries @ 0x1C00F04E0 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00F0558 (DxEngSelectPaletteToSurface.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00F0964 (hsurfCreateCompatibleSurface.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F12E4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C025FFE0 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C027E4D0 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0299360 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x1C02A9930 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B28C0 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02B3F60 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02B3FD4 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02B4310 (GreSetPaletteEntries.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C02B47A0 (NtGdiGetNearestPaletteIndex.c)
 *     NtGdiResizePalette @ 0x1C02B4820 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
